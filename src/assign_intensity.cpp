/**
 *
 * This code is a reduced, self-contained, version of one step of the WAIRI pipeline.
 * The main task is to compile and run the assign_intensity() function with Vivado HLS (or straight VHDL).
 * The rest of the code and the example main() provide the input and expected output.
 * This code uses fixed point math for efficiency.
 *
 * The hardware specifications are as follows:
 *
 * The block needs to be able to operate at a clock rate of 150 MHz.
 *
 * Latency isn't that big of an issue so long as another input can be placed in the
 * pipeline every 15 clock cycles at the 150 MHz clock rate.
 *
 * The target device is a zc7z045ffg900-2.
 */

/**
 *---------------------------------------------------
 *vivado hls 2016.2
 *pj_r_0001\assign_intensity\m_rpt
 *---------------------------------------------------
 *rev0 : init - source from Ashwin K. Balasubramanian
 *rev1 : updated typo errors.
		 added clk fre 150Mhz .
		 updated the part number xc7z045ffg900-2
		 set_clock_uncertainty 0.63
		 set synth lang from verilog to vhdl
 *rev2 : added ip repo and testbench folder
 *---------------------------------------------------
 */
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cassert>
#include <cstring> // for memset
#include "ap_int.h"
#define BASE_SIZE 4
#define FIXED48_SHIFT 20 // fixed point shift (i.e. 20 bit for decimal)
#define MAX_CUMSUM 256 // 4x4 blocks, each with 16 subpixels; 16 * 16 = 256

typedef unsigned int uint_lut_t;
typedef unsigned short int pixel_value_t;
typedef unsigned int nodemap_accum_t;
typedef unsigned int nodemap_count_t;
typedef ap_uint<48> FixedType48;

using namespace std;
/**
 * Compute the reciprocal of the cumulative sum using fixed point math.
 * The function assumes that cumsum is a positive number between 0 and MAX_CUMSUM
 */
FixedType48 cumsum_reciprocal(FixedType48 cumsum)
{
    const float fix_mult = (float)(1L << FIXED48_SHIFT);
    assert (0 <= cumsum && cumsum <= MAX_CUMSUM);

    FixedType48 rec;
    if (cumsum == 0) {
        // maximum representable unsigned value: 0xFFF..
        rec = (FixedType48)(-1);
    }
    else {
        // the following rounding method assumes that cumsum is positive and
        // that integer conversion implies truncation

        rec = (FixedType48)((1.0f / cumsum) * fix_mult + 0.5f);
    }
    return rec;
}


/**
 * Assigns the pixel intensity to the nodemap area covered by the pixel
 * accounting for the relative weight of the pixels, using the alpha buffer.
 * \param   alphabuf        BASE_SIZE x BASE_SIZE buffer holding alpha mask of pixel
 * \param   intensity       The pixel intensity value
 * \param   node_output     Nodemap output buffer
 * \param   node_count      Counting buffer for averaging
 * \return  0 if successful, non-zero otherwise.
 */
int assign_intensity(
    const uint_lut_t alphabuf[BASE_SIZE][BASE_SIZE],
    pixel_value_t    intensity,
    nodemap_accum_t  node_output[BASE_SIZE][BASE_SIZE],
    nodemap_count_t  node_count[BASE_SIZE][BASE_SIZE])
{
#pragma HLS TOP

    // Special Fixed point format used only in this function: 44.20
    // This fixed point format is used for the intermediate calculations
    // so that the fractional portion of the nodemap is calculated correctly.
    //const unsigned int FIXED48_SHIFT  =  20; // 44.20 fixed point format
    FixedType48 cumsum;

    // sum all values (unrolled version)
    cumsum =  (FixedType48)(alphabuf[0][0] + alphabuf[0][1] + alphabuf[0][2] + alphabuf[0][3]);
    cumsum += (FixedType48)(alphabuf[1][0] + alphabuf[1][1] + alphabuf[1][2] + alphabuf[1][3]);
    cumsum += (FixedType48)(alphabuf[2][0] + alphabuf[2][1] + alphabuf[2][2] + alphabuf[2][3]);
    cumsum += (FixedType48)(alphabuf[3][0] + alphabuf[3][1] + alphabuf[3][2] + alphabuf[3][3]);
    FixedType48 csumrec = cumsum_reciprocal(cumsum);
    FixedType48 fix_intensity = ((FixedType48)intensity) << FIXED48_SHIFT;
    assign_intensity_label4:for (int i = 0; i < BASE_SIZE; i++)


    {
#pragma HLS PIPELINE II=1 rewind
#pragma HLS UNROLL
        assign_intensity_label1:for (int j = 0; j < BASE_SIZE; j++) {
#pragma HLS PIPELINE II=1 rewind
            // use fixed point math to normalize alpha value
            //FixedType48 alpha_norm = ((FixedType48)alphabuf[i][j] << FIXED48_SHIFT) / cumsum; // !DIV
            FixedType48 alpha_norm = ((FixedType48)alphabuf[i][j] * csumrec);
            // Note: the following lines are critical for memory bandwidth
            node_count[i][j]  += (nodemap_count_t)alpha_norm; // update the counts
            // update the output buffer
            node_output[i][j] += (nodemap_accum_t)((alpha_norm * fix_intensity) >> FIXED48_SHIFT);
        }
    }
    return 0;
}



// example test program
// compile with: g++ assign_test.cpp -o assign_test
/*
Expected output:

node_output =
  56.89  113.78  113.78   56.89
 113.78  227.56  227.56  113.78
 113.78  227.56  227.56  113.78
  56.89  113.78  113.78   56.89
node_count =
   0.03    0.06    0.06    0.03
   0.06    0.11    0.11    0.06
   0.06    0.11    0.11    0.06
   0.03    0.06    0.06    0.03
*/

void print_buffer_fp(uint_lut_t buf[BASE_SIZE][BASE_SIZE])
{
	int i,j;
	const float fix_factor = 1048576.0f; // 2^20
#pragma HLS PIPELINE II=1 rewind
#pragma HLS UNROLL
    print_buffer_fp_label2:for (i = 0; i < BASE_SIZE; i++) {
        print_buffer_fp_label3:for (j = 0; j < BASE_SIZE; j++) {
        	printf("%7.2f ", (float)(buf[i][j]) / fix_factor);
        }
        printf("\n");
    }
}


int init()
{
#pragma HLS PIPELINE
    // prepare input
    const uint_lut_t alphabuf[BASE_SIZE][BASE_SIZE] = {
        {4,  8,  8, 4},
        {8, 16, 16, 8},
        {8, 16, 16, 8},
        {4,  8,  8, 4}
    };
    pixel_value_t intensity = 2048;
    nodemap_accum_t  node_output[BASE_SIZE][BASE_SIZE];
    nodemap_count_t  node_count[BASE_SIZE][BASE_SIZE];

    // initialize buffers
    memset(node_output, 0, BASE_SIZE*BASE_SIZE*sizeof(nodemap_accum_t));
    memset(node_count, 0, BASE_SIZE*BASE_SIZE*sizeof(nodemap_count_t));

    // test function call
    int res = assign_intensity(alphabuf, intensity, node_output, node_count);
    if (res != 0) {
        cerr << "Assignment operation failed." << endl;
        return -1;
    }

    // print output buffers to stdout
    cout << "node_output =" << endl;
    print_buffer_fp(node_output);

    cout << "node_count =" << endl;
    print_buffer_fp(node_count);
    return 0;
}


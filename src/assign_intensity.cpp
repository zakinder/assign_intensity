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
FixedType48 cumsum_reciprocal(FixedType48 cumsum)
{
    const float fix_mult = (float)(1L << FIXED48_SHIFT);
    assert (0 <= cumsum && cumsum <= MAX_CUMSUM);
    FixedType48 rec;
    if (cumsum == 0) {
        rec = (FixedType48)(-1);
    }
    else {
        rec = (FixedType48)((1.0f / cumsum) * fix_mult + 0.5f);
    }
    return rec;
}

int assign_intensity(
    const uint_lut_t alphabuf[BASE_SIZE][BASE_SIZE],
    pixel_value_t    intensity,
    nodemap_accum_t  node_output[BASE_SIZE][BASE_SIZE],
    nodemap_count_t  node_count[BASE_SIZE][BASE_SIZE])
{
    FixedType48 cumsum;
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
            FixedType48 alpha_norm = ((FixedType48)alphabuf[i][j] * csumrec);
            node_count[i][j]  += (nodemap_count_t)alpha_norm; // update the counts
            node_output[i][j] += (nodemap_accum_t)((alpha_norm * fix_intensity) >> FIXED48_SHIFT);

        }
    }
    return 0;
}
void init(int *a, int *c)
{
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE s_axilite port=a bundle=BUS_A
#pragma HLS INTERFACE s_axilite port=c register bundle=BUS_A
#pragma HLS INTERFACE s_axilite port=return bundle=BUS_A


    const uint_lut_t alphabuf[BASE_SIZE][BASE_SIZE] = {
        {4,  8,  8, 4},
        {8, 16, 16, 8},
        {8, 16, 16, 8},
        {4,  8,  8, 4}
    };
    pixel_value_t intensity = 2048;
    nodemap_accum_t  node_output[BASE_SIZE][BASE_SIZE];
    nodemap_count_t  node_count[BASE_SIZE][BASE_SIZE];
    memset(node_output, 0, BASE_SIZE*BASE_SIZE*sizeof(nodemap_accum_t));
    memset(node_count, 0, BASE_SIZE*BASE_SIZE*sizeof(nodemap_count_t));

    *a = assign_intensity(alphabuf, intensity, node_output, node_count);



}

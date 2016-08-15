################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
OBJS += \
./source/assign_intensity.o 

CPP_DEPS += \
./source/assign_intensity.d 


# Each subdirectory must supply rules for building sources it contributes
source/assign_intensity.o: C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/src/assign_intensity.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Users/sakin/Desktop/pj_r_0001 -IC:/Xilinx/Vivado_HLS/2016.2/include/ap_sysc -IC:/Xilinx/Vivado_HLS/2016.2/include -IC:/Xilinx/Vivado_HLS/2016.2/include/etc -IC:/Xilinx/Vivado_HLS/2016.2/win64/tools/auto_cc/include -IC:/Xilinx/Vivado_HLS/2016.2/win64/tools/systemc/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



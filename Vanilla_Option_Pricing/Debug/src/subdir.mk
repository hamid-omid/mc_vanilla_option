################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MC_SImulator.cpp \
../src/MainMC.cpp \
../src/PayOff.cpp \
../src/random_mine.cpp 

OBJS += \
./src/MC_SImulator.o \
./src/MainMC.o \
./src/PayOff.o \
./src/random_mine.o 

CPP_DEPS += \
./src/MC_SImulator.d \
./src/MainMC.d \
./src/PayOff.d \
./src/random_mine.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



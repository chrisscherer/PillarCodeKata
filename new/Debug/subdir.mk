################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AllTests.cpp \
../FaxNumber.cpp \
../FaxNumberTest.cpp \
../Reader.cpp \
../ReaderTest.cpp 

OBJS += \
./AllTests.o \
./FaxNumber.o \
./FaxNumberTest.o \
./Reader.o \
./ReaderTest.o 

CPP_DEPS += \
./AllTests.d \
./FaxNumber.d \
./FaxNumberTest.d \
./Reader.d \
./ReaderTest.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/Users/christopherscherer/Documents/CPP/cpputest-3.5/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



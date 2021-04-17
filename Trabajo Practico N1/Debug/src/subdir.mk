################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Trabajo\ Practico\ N1.c \
../src/tpuno.c \
../src/utn2.c 

OBJS += \
./src/Trabajo\ Practico\ N1.o \
./src/tpuno.o \
./src/utn2.o 

C_DEPS += \
./src/Trabajo\ Practico\ N1.d \
./src/tpuno.d \
./src/utn2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trabajo\ Practico\ N1.o: ../src/Trabajo\ Practico\ N1.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trabajo Practico N1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



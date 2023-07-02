################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.c 

OBJS += \
./ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.o 

C_DEPS += \
./ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/%.o ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/%.su: ../ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/%.c ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/FreeRTOSv202212.01/include" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ThirdParty-2f-FreeRTOSv202212-2e-01-2f-GCC-2f-ARM_CM4F

clean-ThirdParty-2f-FreeRTOSv202212-2e-01-2f-GCC-2f-ARM_CM4F:
	-$(RM) ./ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.d ./ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.o ./ThirdParty/FreeRTOSv202212.01/GCC/ARM_CM4F/port.su

.PHONY: clean-ThirdParty-2f-FreeRTOSv202212-2e-01-2f-GCC-2f-ARM_CM4F


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdParty/FreeRTOS/MemMang/heap_4.c 

OBJS += \
./ThirdParty/FreeRTOS/MemMang/heap_4.o 

C_DEPS += \
./ThirdParty/FreeRTOS/MemMang/heap_4.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdParty/FreeRTOS/MemMang/%.o ThirdParty/FreeRTOS/MemMang/%.su: ../ThirdParty/FreeRTOS/MemMang/%.c ThirdParty/FreeRTOS/MemMang/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/FreeRTOS/include" -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/SEGGER/Config" -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/SEGGER/OS" -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/SEGGER/SEGGER" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ThirdParty-2f-FreeRTOS-2f-MemMang

clean-ThirdParty-2f-FreeRTOS-2f-MemMang:
	-$(RM) ./ThirdParty/FreeRTOS/MemMang/heap_4.d ./ThirdParty/FreeRTOS/MemMang/heap_4.o ./ThirdParty/FreeRTOS/MemMang/heap_4.su

.PHONY: clean-ThirdParty-2f-FreeRTOS-2f-MemMang


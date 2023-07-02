################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdParty/FreeRTOSv202212.01/croutine.c \
../ThirdParty/FreeRTOSv202212.01/event_groups.c \
../ThirdParty/FreeRTOSv202212.01/list.c \
../ThirdParty/FreeRTOSv202212.01/queue.c \
../ThirdParty/FreeRTOSv202212.01/stream_buffer.c \
../ThirdParty/FreeRTOSv202212.01/tasks.c \
../ThirdParty/FreeRTOSv202212.01/timers.c 

OBJS += \
./ThirdParty/FreeRTOSv202212.01/croutine.o \
./ThirdParty/FreeRTOSv202212.01/event_groups.o \
./ThirdParty/FreeRTOSv202212.01/list.o \
./ThirdParty/FreeRTOSv202212.01/queue.o \
./ThirdParty/FreeRTOSv202212.01/stream_buffer.o \
./ThirdParty/FreeRTOSv202212.01/tasks.o \
./ThirdParty/FreeRTOSv202212.01/timers.o 

C_DEPS += \
./ThirdParty/FreeRTOSv202212.01/croutine.d \
./ThirdParty/FreeRTOSv202212.01/event_groups.d \
./ThirdParty/FreeRTOSv202212.01/list.d \
./ThirdParty/FreeRTOSv202212.01/queue.d \
./ThirdParty/FreeRTOSv202212.01/stream_buffer.d \
./ThirdParty/FreeRTOSv202212.01/tasks.d \
./ThirdParty/FreeRTOSv202212.01/timers.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdParty/FreeRTOSv202212.01/%.o ThirdParty/FreeRTOSv202212.01/%.su: ../ThirdParty/FreeRTOSv202212.01/%.c ThirdParty/FreeRTOSv202212.01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/FastBit Courses/FreeRTOS/RTOS_workspace/Workspace_202212/001Tasks/ThirdParty/FreeRTOSv202212.01/include" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ThirdParty-2f-FreeRTOSv202212-2e-01

clean-ThirdParty-2f-FreeRTOSv202212-2e-01:
	-$(RM) ./ThirdParty/FreeRTOSv202212.01/croutine.d ./ThirdParty/FreeRTOSv202212.01/croutine.o ./ThirdParty/FreeRTOSv202212.01/croutine.su ./ThirdParty/FreeRTOSv202212.01/event_groups.d ./ThirdParty/FreeRTOSv202212.01/event_groups.o ./ThirdParty/FreeRTOSv202212.01/event_groups.su ./ThirdParty/FreeRTOSv202212.01/list.d ./ThirdParty/FreeRTOSv202212.01/list.o ./ThirdParty/FreeRTOSv202212.01/list.su ./ThirdParty/FreeRTOSv202212.01/queue.d ./ThirdParty/FreeRTOSv202212.01/queue.o ./ThirdParty/FreeRTOSv202212.01/queue.su ./ThirdParty/FreeRTOSv202212.01/stream_buffer.d ./ThirdParty/FreeRTOSv202212.01/stream_buffer.o ./ThirdParty/FreeRTOSv202212.01/stream_buffer.su ./ThirdParty/FreeRTOSv202212.01/tasks.d ./ThirdParty/FreeRTOSv202212.01/tasks.o ./ThirdParty/FreeRTOSv202212.01/tasks.su ./ThirdParty/FreeRTOSv202212.01/timers.d ./ThirdParty/FreeRTOSv202212.01/timers.o ./ThirdParty/FreeRTOSv202212.01/timers.su

.PHONY: clean-ThirdParty-2f-FreeRTOSv202212-2e-01


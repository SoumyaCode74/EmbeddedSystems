################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ili9341.c \
../Src/main.c \
../Src/stm32f429i_discovery.c \
../Src/stm32f4xx_hal.c \
../Src/stm32f4xx_hal_cortex.c \
../Src/stm32f4xx_hal_gpio.c \
../Src/stm32f4xx_hal_ltdc.c \
../Src/stm32f4xx_hal_msp.c \
../Src/stm32f4xx_hal_pwr_ex.c \
../Src/stm32f4xx_hal_rcc.c \
../Src/stm32f4xx_hal_rcc_ex.c \
../Src/stm32f4xx_hal_spi.c \
../Src/stm32f4xx_it.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f4xx.c 

OBJS += \
./Src/ili9341.o \
./Src/main.o \
./Src/stm32f429i_discovery.o \
./Src/stm32f4xx_hal.o \
./Src/stm32f4xx_hal_cortex.o \
./Src/stm32f4xx_hal_gpio.o \
./Src/stm32f4xx_hal_ltdc.o \
./Src/stm32f4xx_hal_msp.o \
./Src/stm32f4xx_hal_pwr_ex.o \
./Src/stm32f4xx_hal_rcc.o \
./Src/stm32f4xx_hal_rcc_ex.o \
./Src/stm32f4xx_hal_spi.o \
./Src/stm32f4xx_it.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f4xx.o 

C_DEPS += \
./Src/ili9341.d \
./Src/main.d \
./Src/stm32f429i_discovery.d \
./Src/stm32f4xx_hal.d \
./Src/stm32f4xx_hal_cortex.d \
./Src/stm32f4xx_hal_gpio.d \
./Src/stm32f4xx_hal_ltdc.d \
./Src/stm32f4xx_hal_msp.d \
./Src/stm32f4xx_hal_pwr_ex.d \
./Src/stm32f4xx_hal_rcc.d \
./Src/stm32f4xx_hal_rcc_ex.d \
./Src/stm32f4xx_hal_spi.d \
./Src/stm32f4xx_it.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F429xx -DSTM32F429I_DISC1 -DSTM32 -DSTM32F429ZITx -DSTM32F4 -c -I../Inc -I"D:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/STM32_Display/STM32Cube_FW_F4_V1.27.0/Drivers/CMSIS/Core/Include" -ID:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/STM32_Display/STM32Cube_FW_F4_V1.27.0/Drivers/STM32F4xx_HAL_Driver/Inc -ID:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/STM32_Display/STM32Cube_FW_F4_V1.27.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include -ID:/Users/soumy/GitHub/EmbeddedSystems/EmbeddedSystems/STM32_Display/STM32Cube_FW_F4_V1.27.0/Drivers/BSP/STM32F429I-Discovery -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/ili9341.d ./Src/ili9341.o ./Src/ili9341.su ./Src/main.d ./Src/main.o ./Src/main.su ./Src/stm32f429i_discovery.d ./Src/stm32f429i_discovery.o ./Src/stm32f429i_discovery.su ./Src/stm32f4xx_hal.d ./Src/stm32f4xx_hal.o ./Src/stm32f4xx_hal.su ./Src/stm32f4xx_hal_cortex.d ./Src/stm32f4xx_hal_cortex.o ./Src/stm32f4xx_hal_cortex.su ./Src/stm32f4xx_hal_gpio.d ./Src/stm32f4xx_hal_gpio.o ./Src/stm32f4xx_hal_gpio.su ./Src/stm32f4xx_hal_ltdc.d ./Src/stm32f4xx_hal_ltdc.o ./Src/stm32f4xx_hal_ltdc.su ./Src/stm32f4xx_hal_msp.d ./Src/stm32f4xx_hal_msp.o ./Src/stm32f4xx_hal_msp.su ./Src/stm32f4xx_hal_pwr_ex.d ./Src/stm32f4xx_hal_pwr_ex.o ./Src/stm32f4xx_hal_pwr_ex.su ./Src/stm32f4xx_hal_rcc.d ./Src/stm32f4xx_hal_rcc.o ./Src/stm32f4xx_hal_rcc.su ./Src/stm32f4xx_hal_rcc_ex.d ./Src/stm32f4xx_hal_rcc_ex.o ./Src/stm32f4xx_hal_rcc_ex.su ./Src/stm32f4xx_hal_spi.d ./Src/stm32f4xx_hal_spi.o ./Src/stm32f4xx_hal_spi.su ./Src/stm32f4xx_it.d ./Src/stm32f4xx_it.o ./Src/stm32f4xx_it.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f4xx.d ./Src/system_stm32f4xx.o ./Src/system_stm32f4xx.su

.PHONY: clean-Src


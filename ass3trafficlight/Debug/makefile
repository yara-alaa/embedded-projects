################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ass3trafficlight.lss \

FLASH_IMAGE += \
ass3trafficlight.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: ass3trafficlight.elf secondary-outputs

# Tool invocations
ass3trafficlight.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ass3trafficlight.map -mmcu=atmega32 -o "ass3trafficlight.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ass3trafficlight.lss: ass3trafficlight.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ass3trafficlight.elf  >"ass3trafficlight.lss"
	@echo 'Finished building: $@'
	@echo ' '

ass3trafficlight.hex: ass3trafficlight.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ass3trafficlight.elf  "ass3trafficlight.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ass3trafficlight.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ass3trafficlight.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: ass3trafficlight.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm32 -cusbasp -Uflash:w:ass3trafficlight.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ass3trafficlight.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

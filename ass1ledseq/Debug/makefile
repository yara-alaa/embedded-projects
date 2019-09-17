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
ass1ledseq.lss \

FLASH_IMAGE += \
ass1ledseq.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: ass1ledseq.elf secondary-outputs

# Tool invocations
ass1ledseq.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ass1ledseq.map -mmcu=atmega32 -o "ass1ledseq.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ass1ledseq.lss: ass1ledseq.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ass1ledseq.elf  >"ass1ledseq.lss"
	@echo 'Finished building: $@'
	@echo ' '

ass1ledseq.hex: ass1ledseq.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ass1ledseq.elf  "ass1ledseq.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ass1ledseq.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ass1ledseq.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: ass1ledseq.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm32 -cusbasp -Uflash:w:ass1ledseq.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ass1ledseq.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

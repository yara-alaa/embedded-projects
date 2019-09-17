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
lec1ass42leds2switches.lss \

FLASH_IMAGE += \
lec1ass42leds2switches.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: lec1ass42leds2switches.elf secondary-outputs

# Tool invocations
lec1ass42leds2switches.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,lec1ass42leds2switches.map -mmcu=atmega32 -o "lec1ass42leds2switches.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

lec1ass42leds2switches.lss: lec1ass42leds2switches.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S lec1ass42leds2switches.elf  >"lec1ass42leds2switches.lss"
	@echo 'Finished building: $@'
	@echo ' '

lec1ass42leds2switches.hex: lec1ass42leds2switches.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex lec1ass42leds2switches.elf  "lec1ass42leds2switches.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: lec1ass42leds2switches.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 lec1ass42leds2switches.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: lec1ass42leds2switches.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm32 -cusbasp -Uflash:w:lec1ass42leds2switches.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) lec1ass42leds2switches.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

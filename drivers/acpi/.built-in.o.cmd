cmd_drivers/acpi/built-in.o :=  ld -m elf_x86_64   -r -o drivers/acpi/built-in.o drivers/acpi/tables.o drivers/acpi/blacklist.o drivers/acpi/acpi.o drivers/acpi/acpica/built-in.o drivers/acpi/ac.o drivers/acpi/button.o drivers/acpi/fan.o drivers/acpi/processor.o drivers/acpi/container.o drivers/acpi/thermal.o drivers/acpi/battery.o drivers/acpi/hed.o drivers/acpi/bgrt.o drivers/acpi/apei/built-in.o 

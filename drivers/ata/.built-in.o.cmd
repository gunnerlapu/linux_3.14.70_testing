cmd_drivers/ata/built-in.o :=  ld -m elf_x86_64   -r -o drivers/ata/built-in.o drivers/ata/libata.o drivers/ata/ata_piix.o drivers/ata/pata_sis.o drivers/ata/ata_generic.o 

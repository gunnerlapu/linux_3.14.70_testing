cmd_drivers/pci/pci-stub.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/pci/pci-stub.ko drivers/pci/pci-stub.o drivers/pci/pci-stub.mod.o

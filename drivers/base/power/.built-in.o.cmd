cmd_drivers/base/power/built-in.o :=  ld -m elf_x86_64   -r -o drivers/base/power/built-in.o drivers/base/power/sysfs.o drivers/base/power/generic_ops.o drivers/base/power/common.o drivers/base/power/qos.o drivers/base/power/main.o drivers/base/power/wakeup.o drivers/base/power/runtime.o 
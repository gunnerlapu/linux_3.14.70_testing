cmd_arch/x86/kernel/cpu/mcheck/built-in.o :=  ld -m elf_x86_64   -r -o arch/x86/kernel/cpu/mcheck/built-in.o arch/x86/kernel/cpu/mcheck/mce.o arch/x86/kernel/cpu/mcheck/mce-severity.o arch/x86/kernel/cpu/mcheck/mce_intel.o arch/x86/kernel/cpu/mcheck/mce_amd.o arch/x86/kernel/cpu/mcheck/threshold.o arch/x86/kernel/cpu/mcheck/therm_throt.o arch/x86/kernel/cpu/mcheck/mce-apei.o 
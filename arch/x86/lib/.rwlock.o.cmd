cmd_arch/x86/lib/rwlock.o := gcc -Wp,-MD,arch/x86/lib/.rwlock.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m64 -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1   -mfentry -DCC_USING_FENTRY         -c -o arch/x86/lib/rwlock.o arch/x86/lib/rwlock.S

source_arch/x86/lib/rwlock.o := arch/x86/lib/rwlock.S

deps_arch/x86/lib/rwlock.o := \
    $(wildcard include/config/x86/32.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/linkage.h \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/alternative-asm.h \
    $(wildcard include/config/smp.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/asm.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/frame.h \
    $(wildcard include/config/frame/pointer.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/dwarf2.h \
    $(wildcard include/config/as/cfi.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
    $(wildcard include/config/as/cfi/sections.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/rwlock.h \
    $(wildcard include/config/nr/cpus.h) \

arch/x86/lib/rwlock.o: $(deps_arch/x86/lib/rwlock.o)

$(deps_arch/x86/lib/rwlock.o):

cmd_arch/x86/ia32/syscall_ia32.o := gcc -Wp,-MD,arch/x86/ia32/.syscall_ia32.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -m64 -mno-mmx -mno-sse -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(syscall_ia32)"  -D"KBUILD_MODNAME=KBUILD_STR(syscall_ia32)" -c -o arch/x86/ia32/.tmp_syscall_ia32.o arch/x86/ia32/syscall_ia32.c

source_arch/x86/ia32/syscall_ia32.o := arch/x86/ia32/syscall_ia32.c

deps_arch/x86/ia32/syscall_ia32.o := \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/linkage.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \
  include/linux/sys.h \
  include/linux/cache.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/sysinfo.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/types.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/posix_types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/posix_types_64.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/posix_types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
    $(wildcard include/config/x86/internode/cache/shift.h) \
    $(wildcard include/config/x86/vsmp.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/x86/include/generated/asm/syscalls_32.h \

arch/x86/ia32/syscall_ia32.o: $(deps_arch/x86/ia32/syscall_ia32.o)

$(deps_arch/x86/ia32/syscall_ia32.o):

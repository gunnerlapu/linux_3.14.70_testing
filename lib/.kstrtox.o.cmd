cmd_lib/kstrtox.o := gcc -Wp,-MD,lib/.kstrtox.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -m64 -mno-mmx -mno-sse -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(kstrtox)"  -D"KBUILD_MODNAME=KBUILD_STR(kstrtox)" -c -o lib/.tmp_kstrtox.o lib/kstrtox.c

source_lib/kstrtox.o := lib/kstrtox.c

deps_lib/kstrtox.o := \
  include/linux/ctype.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/errno.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/errno.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/errno-base.h \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h \
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
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
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
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/posix_types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/posix_types_64.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/posix_types.h \
  include/linux/bitops.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/bitops.h \
    $(wildcard include/config/x86/cmov.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/alternative.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/paravirt.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/asm.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/ptrace.h \
    $(wildcard include/config/x86/debugctlmsr.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/segment.h \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/x86/32/lazy/gs.h) \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/const.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
    $(wildcard include/config/x86/internode/cache/shift.h) \
    $(wildcard include/config/x86/vsmp.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/page_types.h \
    $(wildcard include/config/physical/start.h) \
    $(wildcard include/config/physical/align.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/page_64_types.h \
    $(wildcard include/config/randomize/base.h) \
    $(wildcard include/config/randomize/base/max/offset.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/ptrace.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/ptrace-abi.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/processor-flags.h \
    $(wildcard include/config/vm86.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/processor-flags.h \
  include/asm-generic/ptrace.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cpufeature.h \
    $(wildcard include/config/x86/debug/static/cpu/has.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu/family.h) \
    $(wildcard include/config/math/emulation.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/p6/nop.h) \
    $(wildcard include/config/matom.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/rmwcc.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  include/asm-generic/bitops/sched.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/le.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/typecheck.h \
  include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/kern_levels.h \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/sysinfo.h \
  include/linux/dynamic_debug.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/string.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/string_64.h \
    $(wildcard include/config/kmemcheck.h) \
  include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/div64.h \
  include/asm-generic/div64.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/uaccess.h \
    $(wildcard include/config/x86/intel/usercopy.h) \
    $(wildcard include/config/debug/strict/user/copy/checks.h) \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/thread_info.h \
    $(wildcard include/config/ia32/emulation.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/page.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/page_64.h \
    $(wildcard include/config/debug/virtual.h) \
    $(wildcard include/config/flatmem.h) \
  include/linux/range.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/asm-generic/getorder.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/processor.h \
    $(wildcard include/config/m486.h) \
    $(wildcard include/config/xen.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/vm86.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/vm86.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/math_emu.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/sigcontext.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/sigcontext.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/current.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/percpu.h \
    $(wildcard include/config/x86/64/smp.h) \
  include/asm-generic/percpu.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/pgtable_types.h \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/compat/vdso.h) \
    $(wildcard include/config/proc/fs.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/pgtable_64_types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/sparsemem.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/msr.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/msr.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/msr-index.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/ioctl.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/uapi/asm-generic/ioctl.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cpumask.h \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/bitmap.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/desc_defs.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/nops.h \
    $(wildcard include/config/mk7.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/special_insns.h \
  include/linux/personality.h \
  include/uapi/linux/personality.h \
  include/linux/err.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/irqflags.h \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/atomic.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cmpxchg.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/cmpxchg_64.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/atomic64_64.h \
  include/asm-generic/atomic-long.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/smap.h \
    $(wildcard include/config/x86/smap.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/uaccess_64.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  lib/kstrtox.h \

lib/kstrtox.o: $(deps_lib/kstrtox.o)

$(deps_lib/kstrtox.o):

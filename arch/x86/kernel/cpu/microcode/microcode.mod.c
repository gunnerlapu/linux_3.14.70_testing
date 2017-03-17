#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96a8727e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x506a14d4, __VMLINUX_SYMBOL_STR(cpu_subsys) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6f186430, __VMLINUX_SYMBOL_STR(subsys_interface_unregister) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbfe19491, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xcef1dd0e, __VMLINUX_SYMBOL_STR(perf_check_microcode) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x846f59a, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xbcc440ff, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xd085aded, __VMLINUX_SYMBOL_STR(get_cpu_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xe241b3b5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xbc947eff, __VMLINUX_SYMBOL_STR(subsys_interface_register) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb9c425de, __VMLINUX_SYMBOL_STR(register_syscore_ops) },
	{ 0x762e4a60, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71954cbd, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfdd2d894, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x31742f5a, __VMLINUX_SYMBOL_STR(request_firmware_direct) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa1eb910, __VMLINUX_SYMBOL_STR(unregister_syscore_ops) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf3054171, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x950c78a6, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("x86cpu:vendor:0000:family:*:model:*:feature:*");
MODULE_ALIAS("x86cpu:vendor:0002:family:*:model:*:feature:*");

MODULE_INFO(srcversion, "99DBA6C25EAF962FF0D4C16");

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
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x7f149921, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xdadd7998, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6470de13, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0x11b618b3, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x6681db7d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2c86e52e, __VMLINUX_SYMBOL_STR(parport_register_driver) },
	{ 0x8570206a, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xe3057dc7, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x321bdbb1, __VMLINUX_SYMBOL_STR(compat_get_timeval) },
	{ 0x67e376b8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x612e5ab2, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xea394dc, __VMLINUX_SYMBOL_STR(parport_write) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x66505187, __VMLINUX_SYMBOL_STR(parport_read) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xff7783c, __VMLINUX_SYMBOL_STR(parport_set_timeout) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd5e6800, __VMLINUX_SYMBOL_STR(parport_negotiate) },
	{ 0x1416f578, __VMLINUX_SYMBOL_STR(parport_claim_or_block) },
	{ 0x872b2280, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "EEAC954C6ECB6749111D917");

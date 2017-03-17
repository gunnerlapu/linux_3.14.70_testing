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
	{ 0xbfe19491, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xaaebdb8f, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x60e0fdde, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5aaed3c5, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x21f1d97d, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc33efbc, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x1d9b4204, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x376be320, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xffb3019d, __VMLINUX_SYMBOL_STR(input_class) },
	{ 0x37895860, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x95e81784, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xccc21f5e, __VMLINUX_SYMBOL_STR(input_get_new_minor) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1887bf57, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0xe241b3b5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xf45eb9e7, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf2a9973f, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x5cf53ce2, __VMLINUX_SYMBOL_STR(input_free_minor) },
	{ 0x98f12be4, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xaf03fb0, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x29286643, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "7D415AA7CA99B2360CA0865");

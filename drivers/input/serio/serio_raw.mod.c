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
	{ 0x7f149921, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x50fc79e4, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0xb04228db, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x762e4a60, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xa8f94494, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x3294e08f, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x37895860, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x84a0d6c9, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf3054171, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x167e7f9d, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf45eb9e7, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "FDEA72CB0367C118E11F60A");

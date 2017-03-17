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
	{ 0x11b618b3, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x6681db7d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2c86e52e, __VMLINUX_SYMBOL_STR(parport_register_driver) },
	{ 0x8570206a, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xe3057dc7, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x66505187, __VMLINUX_SYMBOL_STR(parport_read) },
	{ 0xea394dc, __VMLINUX_SYMBOL_STR(parport_write) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x612e5ab2, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xd99478d4, __VMLINUX_SYMBOL_STR(parport_put_port) },
	{ 0x4b7a69fb, __VMLINUX_SYMBOL_STR(parport_find_number) },
	{ 0xff7783c, __VMLINUX_SYMBOL_STR(parport_set_timeout) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x872b2280, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6470de13, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xd5e6800, __VMLINUX_SYMBOL_STR(parport_negotiate) },
	{ 0x1416f578, __VMLINUX_SYMBOL_STR(parport_claim_or_block) },
	{ 0x67e376b8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xdadd7998, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "33F068D1282A179477800A4");

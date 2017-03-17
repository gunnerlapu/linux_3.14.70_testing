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
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x9b14308d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb46ba911, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x60e0fdde, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0xf417d386, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x72bc96e6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xa8f94494, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xcfcd6c09, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xaaebdb8f, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1887bf57, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x1d9b4204, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2a9973f, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0xaf03fb0, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "A53E0A360882910AC4754D4");

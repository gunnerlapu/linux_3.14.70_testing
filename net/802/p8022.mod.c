#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96a8727e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xde66db16, __VMLINUX_SYMBOL_STR(llc_sap_open) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc88dca1e, __VMLINUX_SYMBOL_STR(llc_sap_close) },
	{ 0xf9ad7532, __VMLINUX_SYMBOL_STR(llc_build_and_send_ui_pkt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "E7832359DD6AD89A425352C");

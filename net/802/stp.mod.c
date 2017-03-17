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
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x763bbd23, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xde66db16, __VMLINUX_SYMBOL_STR(llc_sap_open) },
	{ 0xc88dca1e, __VMLINUX_SYMBOL_STR(llc_sap_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "AFBB842A0563D27C8F56BBF");

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
	{ 0x6db09e88, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe5a9fc63, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3839bcd1, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa77e72bf, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x763bbd23, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xbea79f59, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E8EFBA94F1CCFC298A98897");

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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70d5a95d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd2afed63, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x11441e5d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x939342f5, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{  0x4cd75, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xc65be1df, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xef037733, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x4062c149, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xca7b7a8, __VMLINUX_SYMBOL_STR(acpi_check_region) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x178781a1, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00007113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000719Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00009463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004385sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000790Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000408sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74B2491021B56C3206E1C87");

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
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x3436226c, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_data) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xef037733, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x1c4d74e4, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_addr) },
	{ 0x4c9f5285, __VMLINUX_SYMBOL_STR(parport_register_port) },
	{ 0xeeaed013, __VMLINUX_SYMBOL_STR(parport_remove_port) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd0d90872, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_addr) },
	{ 0x9563ed2f, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xdc7dd946, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xd99478d4, __VMLINUX_SYMBOL_STR(parport_put_port) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x77121b73, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xbcc440ff, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xd84aeaca, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe683ccef, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf8a25efa, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xef3a851, __VMLINUX_SYMBOL_STR(parport_ieee1284_write_compat) },
	{ 0x74a6504e, __VMLINUX_SYMBOL_STR(parport_announce_port) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x35c67e42, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xfdd2d894, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4ad7b07f, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0x3512fe80, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_addr) },
	{ 0x4a7ca197, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xab600421, __VMLINUX_SYMBOL_STR(probe_irq_off) },
	{ 0x9d9dc1bf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x5e3a3912, __VMLINUX_SYMBOL_STR(parport_irq_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x70d5a95d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc65be1df, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xb121390a, __VMLINUX_SYMBOL_STR(probe_irq_on) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xad5a47a3, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd2afed63, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xce878229, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x4b92ddf6, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_byte) },
	{ 0xc0b374e9, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_nibble) },
	{ 0x8807b527, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x22393f87, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x10bec546, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_data) },
	{ 0x2e3958c9, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_read_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C11Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009901sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000135Cd00000278sv*sd*bc*sc*i*");
MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("acpi*:PNP0400:*");
MODULE_ALIAS("pnp:dPNP0401*");
MODULE_ALIAS("acpi*:PNP0401:*");

MODULE_INFO(srcversion, "5D8DBEB476B502195139E6E");

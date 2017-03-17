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
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xf5b27cd5, __VMLINUX_SYMBOL_STR(snd_register_device_for_dev) },
	{ 0x6afa4c63, __VMLINUX_SYMBOL_STR(snd_card_unref) },
	{ 0xd8f0058d, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd337497c, __VMLINUX_SYMBOL_STR(snd_ctl_register_ioctl_compat) },
	{ 0xb2e5ae4a, __VMLINUX_SYMBOL_STR(snd_lookup_minor_data) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d38c121, __VMLINUX_SYMBOL_STR(snd_ctl_unregister_ioctl) },
	{ 0xf116d4b5, __VMLINUX_SYMBOL_STR(copy_in_user) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc90db58, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f595b11, __VMLINUX_SYMBOL_STR(snd_major) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x9cf80a74, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0x79a37f71, __VMLINUX_SYMBOL_STR(snd_ctl_register_ioctl) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5bee6c60, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf9965398, __VMLINUX_SYMBOL_STR(snd_ctl_unregister_ioctl_compat) },
	{ 0xb833c44d, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0x8080b95c, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "1BB05B0D15273D64BE3B62B");

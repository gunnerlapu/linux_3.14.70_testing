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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xf5b27cd5, __VMLINUX_SYMBOL_STR(snd_register_device_for_dev) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xbfe19491, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe241b3b5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc90db58, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x3971b4df, __VMLINUX_SYMBOL_STR(snd_ecards_limit) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5bee6c60, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb833c44d, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0x8080b95c, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "CC0A4ACA6425F60667E2CA8");

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
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x86d5255f, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0xf5b27cd5, __VMLINUX_SYMBOL_STR(snd_register_device_for_dev) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xbfe19491, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc01cf848, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x6339b6d0, __VMLINUX_SYMBOL_STR(snd_seq_device_load_drivers) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x167e7f9d, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe241b3b5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x168f1082, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc90db58, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0x3971b4df, __VMLINUX_SYMBOL_STR(snd_ecards_limit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x65eb31a5, __VMLINUX_SYMBOL_STR(snd_timer_pause) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x43fd9e4e, __VMLINUX_SYMBOL_STR(snd_timer_resolution) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x17556a4b, __VMLINUX_SYMBOL_STR(snd_timer_start) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xcd8477aa, __VMLINUX_SYMBOL_STR(snd_timer_open) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x95f89a33, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3a57f235, __VMLINUX_SYMBOL_STR(snd_seq_autoload_unlock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85d9c16a, __VMLINUX_SYMBOL_STR(snd_timer_close) },
	{ 0xe55a3dc9, __VMLINUX_SYMBOL_STR(snd_seq_root) },
	{ 0x5bee6c60, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xb90668b2, __VMLINUX_SYMBOL_STR(snd_seq_autoload_lock) },
	{ 0x4a3ea5c0, __VMLINUX_SYMBOL_STR(snd_request_card) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb833c44d, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0x8080b95c, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device,snd-timer";


MODULE_INFO(srcversion, "34087AE1F98797BD1AAB5F9");

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
	{ 0xc875f88f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x31a1269e, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xa8197fbf, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xb4b7748a, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x872bb297, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xa7cd19cd, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xd7a0abdd, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x781a4b77, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xee3b316a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x3bc445c, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x6db09e88, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x72280527, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xef592d6, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x31000864, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xc3bd4409, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xd2fa77ef, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x28599343, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb3404100, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0x66c34200, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x32092db8, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf6e8e475, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x55e8fad8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x936086b9, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x3839bcd1, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xf578befb, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xbc5ff956, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xb27bc75f, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x380c44c5, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfc13ef6a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x7ef3e8da, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x8451b9a3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x763bbd23, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1103f427, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb6cee584, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x9ad5c492, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x76e0e3a6, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xa1c551bc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf6ff814f, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x86ba3f8, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf08f9d9, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x5c3edd59, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xcbfcc733, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa400159f, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x3dab11f6, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xd2bf7711, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x32eeaded, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x16791b55, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xfc44367c, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x5d094db1, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x757507fe, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x433dc87e, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "6A771F352A1D9FFC4071711");

cmd_net/built-in.o :=  ld -m elf_x86_64   -r -o net/built-in.o net/socket.o net/core/built-in.o net/compat.o net/ethernet/built-in.o net/802/built-in.o net/sched/built-in.o net/netlink/built-in.o net/netfilter/built-in.o net/ipv4/built-in.o net/unix/built-in.o net/ipv6/built-in.o net/packet/built-in.o net/wireless/built-in.o net/netlabel/built-in.o net/rfkill/built-in.o net/dcb/built-in.o net/ieee802154/built-in.o net/sysctl_net.o net/dns_resolver/built-in.o 
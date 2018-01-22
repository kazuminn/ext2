ME2FS_SOURCE = me2fs_main.c me2fs_super.c

obj-m += me2fs.o
me2fs-objs := $(ME2FS_SOURCE:.c=.o)

all:
	make -C /lib/modules/3.16.44/build M=$(PWD) modules

clean:
	make -C /lib/modules/3.16.44/build M=$(PWD) clean

insmod:
	sudo insmod me2fs.ko

rmmod:
	sudo rmmod me2fs.ko

mount:
	sudo mount -t me2fs -o loop ./me2fs.img /mnt

umount:
	sudo umount /mnt


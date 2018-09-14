Cody Hegwer
cohe7798@colorado.edu

#Programming Assignment 1 (Checkpoint)

Instructions assume you are using the Raspberry Pi

##Step 1. 
Locate files in the directories shown below:

helloworld.c
cs3753_add.c
Makefile
~/linux/arch/arm/kernel/

syscall.tbl
~/linux/arch/arm/tools/

syscalls.h
~/linux/include/linux/

##Step 2.
Use 'cd ~/linux' and use 'make -j4 CC="ccache gcc" modules dtbs zImage' to begin compiling kernel.

If you haven't already, add 'kernel=test.img' to /boot/config.txt and save.

Then use the following series of copies:

sudo cp arch/arm/boot/dts/*.dtb /boot/
sudo cp arch/arm/boot/dts/overlays/*.dtb* /boot/overlays/
sudo cp arch/arm/boot/dts/overlays/README /boot/overlays/
sudo cp arch/arm/boot/zImage /boot/test.img


##Step 3.
Create a directory entitled "test" using 'mkdir ~/test' on command line and store the following files within said directory:

test_add.c
test_hello.c

Compile the following functions using either 'gcc test_add.c -o test1' or 'gcc test_hello.c -o test2'

Run the tests with './test1' or './test2' on command line.

##Step 4.
Use 'dmesg' to observe how printk in system calls wrote to the system log

I've included 'syslog.txt' with the download as well.

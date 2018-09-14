#include <linux/kernel.h>
#include <linux/linkage.h>
#include <asm/uaccess.h>

asmlinkage long sys_cs3753_add(int a, int b, int __user *answer_user){
	// take two integers and add them together, sum should be stored in a heap
	// memory location in user process.
	
	// sum of a and b, stored in kernel_sum
	int kernel_sum = a + b;

	//log the numbers to be added
	printk(KERN_ALERT "Finding the sum of %d + %d", a, b);

	// copy answer from kernel heap and write to user heap
	// copy 4 bytes, size of int
	//copy_to_user( answer_user, &kernel_sum, 4);
	
	// put_user lol I'm going crazy
	put_user( kernel_sum, answer_user);

	/*
	if (copy_response != 0){
		printk(KERN_ALERT "S.O.L bud");
		return -1;
	} else {
		printk(KERN_ALERT "We've hacked the main frame, the sum is: %d\n", kernel_sum);
	}	
	*/
	printk(KERN_ALERT "the sum is: %d\n", kernel_sum);
	return 0;
}

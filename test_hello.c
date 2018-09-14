//#define _GNU_SOURCE
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>


int main()
{
	//long ret = helloworld();
	long ret = syscall(398);
	//int ret = syscall(2);
	printf("return val: %d\n", ret);
	return 0;
}

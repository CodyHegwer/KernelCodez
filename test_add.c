#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>


int main(){
	
	int a = 8;
	int b = -10;
	int testans;

	printf("addres of testans: %d\n", &testans);

	int ret = syscall(399, a, b, &testans);
	
	printf("return val: %d\n", ret); // should be 0
	printf("testanswer: %d\n", testans); // should be 8
	return 0;

}


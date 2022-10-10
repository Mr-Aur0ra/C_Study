#include <stdio.h>

int main(){
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	ptr = &var;   //存放变量var的地址

	pptr = &ptr;  //存放指针变量ptr的地址

	printf("Value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);
	return 0;
}
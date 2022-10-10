#include <stdio.h>

void swap(int x, int y);  //函数声明


void swap(int x, int y){  //函数定义
	int temp;

	temp = x;  /* save the value of x */
	x = y;     /* put y into x */
	y = temp;  /* put x into y */

	return;
}


int main(){
	int a = 100;
	int b = 200;

	printf("Before swap, value of a is: %d.\n", a);
	printf("Before swap, value of b is: %d.\n\n", b);

	swap(a,b);   //函数调用

	printf("After swap, value of a is: %d.\n", a);
	printf("After swap, value of b is: %d.\n", b);

	return 0;
}
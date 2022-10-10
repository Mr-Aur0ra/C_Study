#include <stdio.h>

void swap(int *x, int *y);

void swap(int *x, int *y){
	int temp;

	temp = *x;                      //保存x处地址所指向的值
	printf("x is %p\n", x);         //x: 0x7ff7b17ed5d8
	printf("*x is %d\n", *x);	    //*x：100 
	printf("temp is %d\n\n", temp); //temp: 100

	*x = *y;     /* put y into x */
	*y = temp;   /* put x into y */
	return;
}


int main(){
	int a = 100;
	int b = 200;

	printf("Before swap, value of a is: %d.\n", a);
	printf("Before swap, value of b is: %d.\n\n", b);

	swap(&a,&b);   //函数调用
    // &a 表示指向 a 的指针，即变量 a 的地址
    // &b 表示指向 b 的指针，即变量 b 的地址
    
	printf("After swap, value of a is: %d.\n", a);
	printf("After swap, value of b is: %d.\n", b);

	return 0;	
}
#include <stdio.h>

int g = 20; //全局变量

int main(){

	int a, b;    //局部变量

	a = 10;      //局部变量实际初始化
	b = 20;      //局部变量实际初始化
	g = a + b;

	printf("Value of a is: %d, b is: %d, g is: %d.\n", a, b, g);

	return 0;
}
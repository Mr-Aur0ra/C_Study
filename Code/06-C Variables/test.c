#include <stdio.h>

//变量声明
extern int a, b;
extern int c;
extern float d;

int main(){

	//变量定义
	int a, b;
	int c;
	float d;

	//实际初始化
	a = 10;
	b = 20;
	c = a + b;
	d = 70.0/3.0;

	printf("value of c : %d\n",c);
	printf("value of d : %f\n",d);

	return 0;
}
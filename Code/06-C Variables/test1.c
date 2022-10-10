#include <stdio.h>

int func();

int main(){

	//函数调用
	int i = func();
	printf("value of i is: %d\n",i);

	return 0;
}

//函数声明
int func(){
	return 0;
}

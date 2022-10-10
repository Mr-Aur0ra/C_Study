#include <stdio.h>

int max(int num1, int num2); //函数声明


int max(int num1, int num2){ //函数定义
	int result;

	if(num1 > num2){
		result = num1;
	}else{
		result = num2;
	}
	return result;
}


int main(){
	int a = 100;
	int b = 200;
	int ret;

	ret = max(a, b);         //函数调用
	printf("Max value is: %d.\n", ret);

	return 0;
}
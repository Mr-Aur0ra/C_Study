#include <stdio.h>

//声明函数func
void func(void);

//static修饰的全局变量
static int count = 5;

int main(){
	while(count--){
		func();
	}
	return 0;
}

void func(void){
	//static修饰的局部变量
	static int i = 5;
	i++;

	printf("i is %d and count is %d\n", i, count);
}

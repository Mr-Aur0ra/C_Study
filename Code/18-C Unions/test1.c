#include <stdio.h>
#include <string.h>

union Data{
	int i;
	float f;
	char str[20];
};

int main(){

	//声明数据类型为Data的联合体变量data。
	union Data data;

	printf("Memory size occupied by data : %lu\n", sizeof(data));

	return 0;
}


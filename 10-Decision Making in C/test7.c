#include <stdio.h>

int main(){

	int num;
	printf("请输入一个整数: ");
	scanf("%d",&num);

	(num>10)?printf("输入的数值大于10.\n"):printf("输入的数值小于10.\n");
	return 0;
}
#include <stdio.h>

int main(){
	int i, j;
	int n[10]; //n是一个包含10个整数元素的数组

	//初始化每一个数组元素
	for(i = 0; i < 10; i++){
		n[i] = 100 + i;  //设置元素的值为100+i
	}

	//输出数组中的每一个元素
	for(j = 0; j < 10; j++){
		printf("n[%d] is: %d.\n", j, n[j]);
	}

	return 0;
}


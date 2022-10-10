#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int * getRandom(){
	static int value[10];
	int i;

	//设置种子(seed)
	srand((unsigned)time(NULL));
	//time(NULL)：返回自格林威治标准时间00:00:00小时以来经过的秒数。

	for(i=0; i<10; i++){
		value[i] = rand();
		printf("value[%d] = %d\n", i, value[i]);
	}
	return value;
}

int main(){
	int i;
	int *p;

	p = getRandom();

	printf("\n");
	for(i=0; i<10; i++){
		printf("(p+%d) is : %p\n", i, p+i);
	}

	printf("\n");
	for(i=0; i<10; i++){
		printf("*(p+%d) is : %d\n", i, *(p+i));
	}

	return 0;
}
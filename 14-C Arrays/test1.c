#include <stdio.h>

int main(){
	int i;
	double balance[5] =  {1000.0, 2.0, 3.4, 17.0, 50.0};

	//输出数组中每个元素的值
	for(i = 0; i < 5; i++){
		printf("balance[%d] is: %.1f\n", i, balance[i]);
	}
	return 0;
}


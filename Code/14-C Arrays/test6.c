#include <stdio.h>

int main(){
	int i;
	double *p;
	double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

	p = balance;

	printf("1.Array values using balance.\n");
	for(i=0; i<5; i++){
		printf("balance[%d] : %f\n", i, balance[i]);
	}
	printf("\n");

	printf("2.Array values using balance as address.\n");
	for(i=0; i<5; i++){
		printf("*(balance + %d) : %f\n", i, *(balance+i));
	}
	printf("\n");

	printf("3.Array values using pointer.\n");
	for(i=0; i<5; i++){
		printf("*(p+%d) : %f\n", i, *(p+i));
	}	
	return 0;
}

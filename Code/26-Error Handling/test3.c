#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dividend = 20;  //被除数
	int divisor = 5;    //除数
	int quotient;       //商

	if(divisor == 0){
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(EXIT_FAILURE);
	}
	quotient = dividend / divisor;
	printf("Value of quotient : %d\n", quotient);

	exit(EXIT_SUCCESS);
}
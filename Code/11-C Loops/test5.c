#include <stdio.h>

int main(){

	int a = 10;

	do{
		if(a == 15){
			a = a + 1;
			continue;
		}
		printf("Value of a is: %d.\n", a);
		a = a + 1;
	}while(a < 20);

	return 0;
}
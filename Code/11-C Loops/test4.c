#include <stdio.h>

int main(){

	int a = 10;

	while(a < 20){
		printf("Value of a is: %d.\n", a);
		a++;
		if(a > 15){
			break;
		}
	}

	return 0;
}
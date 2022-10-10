#include <stdio.h>

const int MAX = 4;

int main(){
	char *names[] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
	int i;

	for(i=0; i<MAX; i++){
		printf("Value of names[%d] = %s\n", i, names[i]);
	}

	return 0;
}

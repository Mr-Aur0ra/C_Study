#include <stdio.h>

int main(){

	int i;
	char str[100];

	printf("Enter a value: ");
	scanf("%s %d", str, &i);

	printf("You entered: %s %d\n", str, i);

	return 0;
}
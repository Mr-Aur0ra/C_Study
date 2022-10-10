#include <stdio.h>

int a = 20;

int sum(int a, int b){
	printf ("Value of a in sum() is: %d\n", a);
    printf ("Value of b in sum() is: %d\n", b);
	return a + b;
}

int main(){
	int a = 10;
	int b = 20;
	int c = 0;

	printf ("Value of a in main() is: %d\n", a);
	
	c = sum(a, b);
	printf ("Value of c in main() is: %d\n", c);

	return 0;
}


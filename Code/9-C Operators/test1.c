#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c;

	c = a + b;
	printf("1. a + b is : %d\n", c);
	c = a - b;
	printf("2. a - b is : %d\n", c);
	c = a * b;
	printf("3. a * b is : %d\n", c);
	c = b / a;
	printf("4. b / a is : %d\n", c);
	c = b % a;
	printf("5. b %% a is : %d\n", c);

	a = 10;
	c = a++;
	printf("6. a++ is %d, a is %d\n", c, a);

	a = 10;
	c = a--;
	printf("7. a-- is %d, a is %d\n", c, a);

	return 0;
}
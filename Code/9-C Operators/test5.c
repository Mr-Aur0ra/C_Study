#include <stdio.h>

int main(){
	unsigned int a = 60;  //0011,1100
	unsigned int b = 13;  //0000,1101
	int c;

	c = a & b;
	printf("1. a & b is : %d\n", c);  //0000,1100(12)
	c = a | b;
	printf("2. a | b is : %d\n", c);  //0011,1101(61)
	c = a ^ b;
	printf("3. a ^ b is : %d\n", c);  //0011,0001(49)
	c = ~a;
	printf("4. ~a is : %d\n", c);     //1100,0011(-61)
	c = a << 2;
	printf("5. a << 2 is : %d\n", c); //1111,0000(240)
	c = a >> 2;
	printf("6. a >> 2 is : %d\n", c); //0000,1111(15)

	return 0;
}
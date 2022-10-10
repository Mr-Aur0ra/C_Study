#include <stdio.h>

int main(){
	int a = 10;
	int c;

	printf("value of a is :%d\n", a);
	c = a;   // c = 10
	printf("c = a, c is :%d\n", c);

	c += a;  // c = c + a = 10 + 10 = 20
	printf("c += a, c is :%d\n", c);
	c -= a;  // c = c - a = 20 - 10 = 10
	printf("c -= a, c is :%d\n", c);	
	c *= a;  // c = c * a = 10 * 10 = 100
	printf("c *= a, c is :%d\n", c);	
	c /= a;  // c = c / a = 100 / 10 = 10
	printf("c /= a, c is :%d\n", c);
	c %= a;  // c = c % a = 10 % 10 = 0                         
	printf("c %%= a, c is :%d\n\n", c);

	c = 10;  //0000,1010(10)
	printf("new value of c is :%d\n", c);
	c <<= 2; //0010,1000(40)
	printf("c << 2, c is :%d\n", c);	
	c >>= 2; //0000,1010(10)
	printf("c >> 2, c is :%d\n", c);	
	c &= 2;  //0000,1010(10) & 0000,0010(2) = 0000,0010(2)
	printf("c &= a, c is :%d\n", c);	
	c |= 2;  //0000,0010(2) | 0000,0010(2) = 0000,0010(2)
	printf("c |= 2, c is :%d\n", c);	
	c ^= 2;  //0000,0010(2) ^ 0000,0010(2) = 0000,0000(0)
	printf("c ^= 2, c is :%d\n", c);	

	return 0;
}
#include <stdio.h>

#define tokenpaster(n) printf("token" #n " = %d", token##n)


int main(){

	int token34 = 40;

	tokenpaster(34);

	return 0;
}
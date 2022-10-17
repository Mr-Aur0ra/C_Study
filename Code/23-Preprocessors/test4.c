#include <stdio.h>

#if !defined(MESSAGE)
	#define MESSAGE "You Wish!"
#endif

int main(){

	printf("Here is the message: %s\n", MESSAGE);

	return 0;
}
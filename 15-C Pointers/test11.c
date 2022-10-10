#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *ptr);

int main(){
	unsigned long sec;

	getSeconds(&sec);

	printf("Number of seconds: %ld\n", sec);

	return 0;
}

void getSeconds(unsigned long *ptr){
	*ptr = time(NULL);
	return;
}

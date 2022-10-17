#include <stdio.h>
#include <string.h>

struct  
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

struct  
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

int main(){
	printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
	printf("Memory size occupied by status2 : %lu\n", sizeof(status2));
	return 0;
}


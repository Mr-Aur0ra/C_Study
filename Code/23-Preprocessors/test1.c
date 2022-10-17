#include <stdio.h>

int main(){

	printf("File : %s\n", __FILE__);
	printf("LINE : %d\n", __LINE__);
	printf("ANSI : %d\n", __STDC__);
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);

	return 0;
}

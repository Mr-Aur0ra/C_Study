#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(){

	FILE *fp = NULL;
	int errnum;

	fp = fopen("unexist.txt", "rb");
	if(fp == NULL){
		fprintf(stderr, "Value of errno : %d\n", errno);
        
        errnum = errno;
		perror("Error printed by perror");
		fprintf(stderr, "Error opening file : %s", strerror(errnum));
	}else{
		fclose(fp);
	}

	return 0;
}

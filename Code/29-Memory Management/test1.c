#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	description = malloc(200 * sizeof(char));

	if(description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}else{
		strcpy(description, "Zara Ali a DPS student in calss 10th");
	}

	printf("Name = %s\n", name);
	printf("Description : %s\n", description);

	return 0;
}
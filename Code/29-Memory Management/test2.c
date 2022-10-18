#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	description = malloc(30 * sizeof(char));

	if(description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}else{
		strcpy(description, "Zara Ali a DPS student.");
	}

	//假设你需要存储更大的描述信息
	description = realloc(description, 100 * sizeof(char));

	if(description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}else{
		strcat(description, "She is in class 10th");
	}


	printf("Name = %s\n", name);
	printf("Description : %s\n", description);

	free(description);

	return 0;
}
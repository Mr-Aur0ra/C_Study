#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;

	if(a == b){
		printf("1. a is equal to b.\n");
	}else{
		printf("1. a is not equal to b.\n");
	}
	if(a != b){
		printf("2. a is not equal to b.\n");
	}else{
		printf("2. a is equal to b.\n");
	}


	if(a < b){
		printf("3. a is less than b.\n");
	}else{
		printf("3. a is not less than b.\n");
	}

	if(a > b){
		printf("4. a is greater than b.\n");
	}else{
		printf("4. a is not greater than b.\n");
	}


	if(a <= b){
		printf("5. a is either less than or equal to b.\n");
	}
	if(a >= b ){
		printf("6. a is either greater than or equal to b.\n");
	}


	return 0;
}
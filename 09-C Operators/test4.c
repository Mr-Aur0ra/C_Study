#include <stdio.h>

int main(){
	int a = 10;
	int b = 0;

	if(a && b){
		printf("1. a && b is true.\n");
	}else{
		printf("1. a && b is false.\n");
	}
	if(a || b){
		printf("2. a || b is true.\n");
	}else{
		printf("2. a || b is false.\n");
	}
	if(!(a && b)){
		printf("3. !(a && b) is true.\n");
	}else{
		printf("3. !(a && b) is false.\n");
	}

	return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

	int len;
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];

	strcpy(str3, str1);  
	printf("1.strcpy(str3, str1), str3 is %s.\n", str3);
    //str3 : Hello

	strcat(str1, str2);  
	printf("2.strcat(str1, str2), str1 is %s.\n", str1);
    //str1 : HelloWorld

	len = strlen(str1);
	printf("3.strlen(str1), length of str1 is %d.\n", len);

	return 0;
}
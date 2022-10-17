#include <stdio.h>

int main(){
	char c;
	char buffer[255];
	FILE *fp = NULL;

	fp = fopen("./test.txt", "r");

	c = fgetc(fp);            //读取一个字符
	printf("1: %c\n", c);

	c = fgetc(fp);            //读取一个字符
	printf("2: %c", c);

	fgets(buffer, 255, fp);   //遇到换行符(LF)或文件末尾符(EOF)时，它会停止读取。
	printf("3: %s", buffer);

	fscanf(fp, "%s", buffer);  //遇到空格和换行符时，它会停止读取。
	printf("4: %s", buffer);

	return 0;
}
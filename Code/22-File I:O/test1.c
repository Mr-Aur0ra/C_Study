#include <stdio.h>

int main(){
	FILE *fp = NULL;

	fp = fopen("./test.txt", "w+");
	
    fputc(97, fp);  //十进制ASCII值97对应小写字母a.
	fputc(10, fp);  //换行符LF(Line Feed)的ASCII值为十进制10.
	fputs("This is testing for fputs...\n", fp);
	fprintf(fp, "This is testing for fprintf...\n");

	fclose(fp);

	return 0;
}
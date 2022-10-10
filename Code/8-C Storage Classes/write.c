#include <stdio.h>

//声明变量count, count变量在main.c中被定义
extern int count;

void write_extern(){
	count = 5;
	printf("count is %d\n", count);
}
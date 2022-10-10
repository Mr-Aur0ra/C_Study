#include <stdio.h>

int count;                   //定义变量count
extern void write_extern();  //声明函数，函数在write.c中被定义

int main(){
	write_extern();
	return 0;
}
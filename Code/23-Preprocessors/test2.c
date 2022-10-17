#include <stdio.h>

#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
//#a：占位符
//#b：占位符
//" and "：表示一个字符串" and "
//": We love you!\n"：表示一个字符串": We love you!\n"


int main(void) {

	message_for(Carole, Debra);

	return 0; 
}
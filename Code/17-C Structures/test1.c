#include <stdio.h>

//定义并初始化数据类型为Books的结构体变量book。
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} book = {"C programing", "Nuha Ali", "C Programming Tutorial", 6495407};

int main(){
	//输出book的信息
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);

	return 0;
}
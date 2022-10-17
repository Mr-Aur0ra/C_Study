#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books *Book){
	printf("Book title : %s\n", Book->title);
	printf("Book author : %s\n", Book->author);
	printf("Book subject : %s\n", Book->subject);
	printf("Book book_id : %d\n\n", Book->book_id);
}

int main(){
	//声明数据类型为Books的结构体变量Book1和Book2。
	struct Books Book1;
	struct Books Book2;

	//设置Book1和Book2的基本信息
	strcpy(Book1.title, "C programing");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;


	//输出Book1和Book2的信息
	printBook(&Book1);
	printBook(&Book2);

	return 0;
}



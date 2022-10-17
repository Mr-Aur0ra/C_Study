#include <stdio.h>
#include <string.h>


//声明一个拥有4个成员的结构体数据类型Books
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};


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
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n\n", Book1.book_id);

	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	return 0;
}



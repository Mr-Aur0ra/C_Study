#include <stdio.h>

int main(){
	int a,c;

	printf("1.先赋值后运算：\n");
	a = 10;
	c = a++;
	printf("c = a++的值是：%d。(先将a的值赋值给c，再进行运算得到新的a值)\n", c);
	printf("a的值是：%d。(此时的a就是a++运算完成后新的a值)\n", a);
	a = 10;
	c = a--;
	printf("c = a--的值是：%d。(先将a的值赋值给c，再进行运算得到新的a值)\n", c);
	printf("a的值是：%d。(此时的a就是a--运算完成后新的a值)\n\n", a);


	printf("2.先运算后赋值：\n");
	a = 10;
	c = ++a;
	printf("c = ++a的值是：%d。(先运算得到新的a值，然后再赋值给c)\n", c);
	printf("a的值是：%d。(此时的a就是++a运算完成的a值)\n", a);
	a = 10;
	c = --a;
	printf("c = --a的值是：%d。(先运算得到新的a值，然后再赋值给c)\n", c);
	printf("a的值是：%d。(此时的a就是--a运算完成后的a值)\n", a);

	return 0;
}
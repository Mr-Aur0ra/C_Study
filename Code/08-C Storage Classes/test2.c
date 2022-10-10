#include<stdio.h>

void add()
{
    auto int a=1;
    static int b=1;
    a = a + 1;
    b = b + 1;
    printf("%d\n",a);
    printf("%d\n",b);
}
 
int main()
{
    printf("第一次调用:\n");
    add();
    printf("第二次调用:\n");
    add();    
    return 0; 
} 
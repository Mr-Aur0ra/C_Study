#include <stdio.h>
#include <stdarg.h>

double average(int num, ...){    //步骤1

    int i;
    double sum = 0.0;
    va_list valist;              //步骤2

    va_start(valist, num);       //步骤3

    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);  //步骤4
    }

    va_end(valist);                  //步骤5

    return sum / num;
}


int main(){

    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));

    return 0;
}
#include <stdio.h>
#include <float.h>

int main(){
    printf("Storage size for float: %d \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);
    printf("\n");

    printf("Storage size for double: %d \n", sizeof(double));
    printf("Minimum double positive value: %E\n", DBL_MIN);
    printf("Maximum double positive value: %E\n", DBL_MAX);
    printf("Precision value: %d\n", DBL_DIG);
    printf("\n");

    printf("Storage size for long double: %d \n", sizeof(long double));
    printf("Minimum long double positive value: %E\n", LDBL_MIN);
    printf("Maximum long double positive value: %E\n", LDBL_MAX);
    printf("Precision value: %d\n", LDBL_DIG);
    printf("\n");

    return 0;
}

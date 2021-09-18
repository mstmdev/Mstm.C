#include <stdio.h>

int main()
{
    int x_int = 1;
    short x_short = 1;
    long x_long = 1;
    double x_double = 1;
    float x_float = 1.11;
    int *x_int_ptr;
    double *x_double_ptr;
    char x_str[10];

    printf("x_int sizeof = %d \r\n", sizeof(x_int));
    printf("x_short sizeof= %d \r\n", sizeof(x_short));
    printf("x_long sizeof= %d \r\n", sizeof(x_long));
    printf("x_double sizeof= %d \r\n", sizeof(x_double));
    printf("x_float sizeof= %d \r\n", sizeof(x_float));
    printf("x_int_ptr sizeof= %d \r\n", sizeof(x_int_ptr));
    printf("x_double_ptr sizeof= %d \r\n", sizeof(x_double_ptr));
    printf("x_str sizeof=%d \r\n", sizeof(x_str));
}
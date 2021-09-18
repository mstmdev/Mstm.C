#include <stdio.h>
#include <stdarg.h>

int calsum(int num, ...);

int main()
{
    //可变参数
    int sum_result = calsum(3, 1, 2, 3);
    printf("sum_result= %d\r\n", sum_result);
}

int calsum(int num, ...)
{
    va_list valist;
    int sum = 0;
    int i;

    va_start(valist, num);

    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }

    va_end(valist);

    return sum;
}
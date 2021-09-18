#include <stdio.h>

//函数声明
int fibonacci(int num);

int main()
{
    int num = 10;
    int result = fibonacci(num);
    printf("num=%d  fibonacci result=%d\r\n", num, result);
}

//0 1 1 2 3 5 8 13 21 34 55
int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}
#include <stdio.h>

//函数声明
void swap(int *x, int *y);

int main()
{
    int x = 100;
    int y = 200;
    swap(&x, &y);
    printf("x=%d  y=%d \r\n", x, y);
}

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
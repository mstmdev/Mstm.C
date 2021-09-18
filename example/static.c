#include <stdio.h>

//函数声明
void printCounter();
void printCounterStatic();

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printCounter();
        printCounterStatic();
    }
}

void printCounter()
{
    int count = 1;
    printf("printCounter--> %d \r\n", count);
    count++;
}

void printCounterStatic()
{
    //static的变量  第一次访问的时候才会初始化
    static int count = 1;
    printf("printCounterStatic--> %d \r\n", count);
    count++;
}
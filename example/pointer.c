#include <stdio.h>

//函数声明
void demo1();
void demo2();
void demo3();
void demo4();
void demo5();
int *getCounter();

int main()
{
    demo1();
    demo2();
    demo3();
    demo4();
    demo5();
}

void demo1()
{
    int num1 = 100;
    int num2 = 200;
    int *num1_ptr = &num1;
    int *num2_ptr = &num2;
    printf("num1=%d addr=%p \r\n", num1, num1_ptr);
    printf("num2=%d addr=%p \r\n", num2, num2_ptr);
}

void demo2()
{
    int num1 = 100;
    int num2 = 200;
    int *num1_ptr = &num1;
    int *num2_ptr = &num2;
    int span = num1_ptr - num2_ptr;
    printf("num2=%d\r\n", *(num1_ptr - span));
}

void demo3()
{
    //数组指针
    char *str_array[] = {"hello", "world"};
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("str_array %d = %s \r\n", i, str_array[i]);
    }
}

void demo4()
{
    //指针的指针
    int num = 100;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;
    printf("num=%d num_ptr=%p num_ptr_ptr=%p \r\n", num, num_ptr, num_ptr_ptr);
}

void demo5()
{
    //函数返回指针对象
    int *count_ptr = getCounter();
    (*count_ptr)++;
    printf("count=%d \r\n", *count_ptr);
}

int *getCounter()
{
    int count = 1;
    int *count_ptr = &count;
    return count_ptr;
}
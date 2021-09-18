#include <stdio.h>

int main()
{
    //局部变量默认的修饰符为auto
    //auto只能在局部变量中使用
    int num1 = 100;
    auto int num2 = 100;
    printf("num1=%d  num2=%d \r\n", num1, num2);
}
#include <stdio.h>

int main()
{
    //register修饰的变量定义在寄存器中，但是不保证一定在寄存器中
    register int num = 100;
    printf("num=%d\r\n", num);
}
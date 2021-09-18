#include <stdio.h>
#include <float.h>

int main()
{
    printf("float 存储最大字节数为：%1u \r\n", sizeof(float));
    printf("float 最小值为 %E \r\n", FLT_MIN);
    printf("float 最大值为 %E \r\n", FLT_MAX);
    printf("float精度为： %d \r\n", FLT_DIG);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //常规定义内存大小
    char str[10];
    strcpy(str, "123456789");
    printf("1.str=%s \r\n", str);

    //使用malloc分配内存
    char *str_ptr;
    str_ptr = (char *)malloc(20 * sizeof(char));
    if (str_ptr == NULL)
    {
        perror("str_ptr 内存分配错误");
        exit(1);
    }
    strcpy(str_ptr, "123456789");
    printf("2.str_ptr=%s\r\n", str_ptr);
    free(str_ptr);
    str_ptr = NULL;

    //使用calloc分配内存
    char *str_ptr2;
    str_ptr2 = (char *)calloc(200, sizeof(char));
    if (str_ptr2 == NULL)
    {
        perror("str_ptr2 内存分配错误");
        exit(1);
    }
    strcpy(str_ptr2, "123456789");
    printf("3.str_ptr2=%s\r\n", str_ptr2);
    free(str_ptr2);
    str_ptr2 = NULL;

    //使用realloc重新分配内存
    //这个demo有问题
    char *str_ptr3;
    str_ptr3 = (char *)calloc(2, sizeof(char));
    if (str_ptr3 == NULL)
    {
        perror("str_ptr3 内存分配错误");
        exit(1);
    }
    strcpy(str_ptr3, "1234567890");
    printf("str_ptr3 sizeof=%d strlen=%d \r\n", sizeof(str_ptr3), strlen(str_ptr3));
    realloc(str_ptr3, 20 * sizeof(char));
    if (str_ptr3 == NULL)
    {
        perror("str_ptr3 内存重新分配错误");
        exit(1);
    }
    strcat(str_ptr3, "a1234567890");
    strcat(str_ptr3, "b1234567890");
    strcat(str_ptr3, "c1234567890");
    strcat(str_ptr3, "d1234567890");
    printf("str_ptr3 sizeof=%d strlen=%d \r\n", sizeof(str_ptr3), strlen(str_ptr3));
    printf("4.str_ptr3=%s\r\n", str_ptr3);
    free(str_ptr3);
    str_ptr3 = NULL;
}
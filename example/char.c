#include <stdio.h>

int main()
{
    //char类型
    char x_char = 'c';
    int x_char_len = sizeof(x_char);
    printf("x_char=%c sizeof=%d \r\n", x_char, x_char_len);

    //char数组
    char x_char_array[] = "abcdefg";
    printf("x_char_array=%s\r\n", x_char_array);

    char x_char_array2[10] = {'1', '2', '3', 'a', 'b', 'c', 'x', 'y', 'z'};
    printf("x_char_array2=%s\r\n", x_char_array2);

    //char指针
    char *x_char_pointer = "this is a char pointer";
    printf("x_char_pointer:%s \r\n", x_char_pointer);

    //char数组指针
    char *x_char_array_pointer = "this is a char array pointer";
    printf("x_char_array_pointer:%s", x_char_array_pointer);
}
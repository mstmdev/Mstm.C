#include <stdio.h>

//接受命令行参数
int main(int argc, char *argv[])
{
    int min_args_count = 4;
    //输入的第一个参数是程序的名称
    //实际参数的个数是argc-1
    if (argc < min_args_count)
    {
        printf("args must more than or equals %d.\r\n", min_args_count - 1);
        return 0;
    }
    printf("you input %d args.\r\n", argc - 1);
    printf("argv[0]=%s \r\n", argv[0]);
    printf("argv[1]=%s \r\n", argv[1]);
    printf("argv[2]=%s \r\n", argv[2]);
    printf("argv[3]=%s \r\n", argv[3]);
}
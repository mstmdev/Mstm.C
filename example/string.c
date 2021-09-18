#include <stdio.h>
#include <string.h>

int main()
{
    //正常打印字符串
    char str_hello[] = "hello string";
    printf("print str_hello: %s\r\n", str_hello);

    char str_left[] = "hi left";
    char str_right[] = "hi right";
    char str_strcpy[50];
    char str_strcat[50];
    char str_strcat_clear[50] = "";
    printf("print str_left: %s \r\n", str_left);
    printf("print str_right: %s \r\n", str_right);

    //strcpy函数拷贝字符串
    printf("print str_strcpy:%s \r\n", str_strcpy);
    strcpy(str_strcpy, str_left);
    printf("print str_strcpy after assign:%s \r\n", str_strcpy);

    //strcat函数组合字符串
    printf("print str_strcat:%s \r\n", str_strcat);
    strcat(str_strcat, str_left);
    strcat(str_strcat, str_right);
    printf("print str_strcat after asign:%s \r\n", str_strcat);

    //strcat函数组合字符串
    //str_strcat_clear定义时设置为空字符串
    printf("print str_strcat_clear:%s \r\n", str_strcat_clear);
    strcat(str_strcat_clear, str_left);
    strcat(str_strcat_clear, str_right);
    printf("print str_strcat_clear after assign:%s \r\n", str_strcat_clear);
}
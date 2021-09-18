#include <stdio.h>
#include <string.h>

union Data {
    int id;
    int length;
    char content[20];
};

int main()
{
    //使用union共同体  共同体的大小由成员中sizeof最大的那一个决定
    //共同体中成员进行赋值时，后者会覆盖前者的值
    union Data data1;
    union Data data2;

    //#1 id length content的值都在被覆盖前输出 所以输出的值都正确
    //正确操作方式
    printf("data1 sizeof=%d \r\n", sizeof(data1));
    data1.id = 1;
    printf("data1 id=%d \r\n", data1.id);
    data1.length = 20;
    printf("data1 length=%d \r\n", data1.length);
    strcpy(data1.content, "1234");
    printf("data1 content sizeof=%d   content=%s\r\n", sizeof(data1.content), data1.content);

    //#2 id和length的值被覆盖，最后结果不正确，content正常
    //正确操作方式
    data2.id = 2;
    data2.length = 10;
    strcpy(data2.content, "test from union");
    printf("data2 sizeof=%d content sizeof=%d id=%d  length=%d  content=%s \r\n", sizeof(data2), sizeof(data2.content), data2.id, data2.length, data2.content);
}
#include <stdio.h>
#include <string.h>

//定义结构体
struct Book
{
    char book_name[50];
    char author[30];
    double price;
    char book_remark[100];
}; //以分号结尾

//函数声明
void printBookInfo(struct Book book);
void printBookInfo2(struct Book *book);

int main()
{
    //定义第一本书
    struct Book book_learn_c;
    strcpy(book_learn_c.book_name, "c language cook book");
    strcpy(book_learn_c.author, "dev_c");
    strcpy(book_learn_c.book_remark, "关于C语言学习的入门教材");
    book_learn_c.price = 100.89;

    //第一第二本书
    struct Book book_learn_c_plus_plus;
    strcpy(book_learn_c_plus_plus.book_name, "c plus plus langeuage cook book");
    strcpy(book_learn_c_plus_plus.author, "dev_c_plus_plus");
    strcpy(book_learn_c_plus_plus.book_remark, "C++学习入门指导");
    book_learn_c_plus_plus.price = 99.82;

    //打印第一本书的信息
    printBookInfo(book_learn_c);

    //打印第二本书的信息
    printBookInfo2(&book_learn_c_plus_plus);
}

void printBookInfo(struct Book book)
{
    printf("-------%s--------\r\n", book.book_name);
    printf("author: %s\r\n", book.author);
    printf("price is %.2f\r\n", book.price);
    printf("remark: %s\r\n", book.book_remark);
    printf("------------------------\r\n\r\n");
}

void printBookInfo2(struct Book *book)
{
    printf("-------%s--------\r\n", book->book_name);
    printf("author: %s\r\n", book->author);
    printf("price is %.2f\r\n", book->price);
    printf("remark: %s\r\n", book->book_remark);
    printf("------------------------\r\n\r\n");
}
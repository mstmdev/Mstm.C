#include <stdio.h>

void delegate(char *(*dowork)(char name[]), char name[]);
char *say_hello(char name[]);

int main()
{
    delegate(say_hello, "coco");
}

void delegate(char *(*dowork)(char name[]), char name[])
{
    char *char_pointer = dowork(name);
    printf("delegate result is %s\r\n", char_pointer);
}

char *say_hello(char name[])
{
    char *hello = "hello world";
    printf("%s %s \r\n", hello, name);
    return hello;
}
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

extern int errno;

int main()
{

    //核心部分 errno perror() strerror()
    FILE *file;
    file = fopen("what_error.txt", "r");
    if (file == NULL)
    {
        perror("through perror print error message");
        printf("read file error,errno=%d,message=%s\r\n", errno, strerror(errno));
        printf("EXIT_FAILURE=%d\r\n", EXIT_FAILURE);
        exit(EXIT_FAILURE);
    }
    else
    {
        fclose(file);
    }
}
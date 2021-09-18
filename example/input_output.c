#include <stdio.h>

int main()
{

    char yourname[20];
    printf("please input your name! \r\n");
    //scanf("%s", yourname);
    //printf("hello %s\r\n", yourname);

    printf("just input!\r\n");
    int i;
    // for(i=0;i<10;i++){
    //     int c=getchar();
    //     putchar(c);
    //     printf("\r\n");
    // }

    char str[10];
    // gets(str);
    // puts(str);

    fgets(str,10,stdin);
    puts(str);
}
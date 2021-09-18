#include<stdio.h>

int main(){
    //文件名
    char filename[]="io_test.txt";
    //文件指针
    FILE *file=NULL;
    //打开文件
    file=fopen(filename,"w+");
    //写入文件
    fprintf(file,"io test file\r\nhello\r\n");
    //写入字符串到文件
    fputs("this words from fputs",file);
    //写入一个字符到文件中
    fputc('P',file);
    //关闭文件，将缓冲区的数据写入文件
    fclose(file);

    file=fopen(filename,"r+");
    //读取文件内容
    char readbuff[100];
    fgets(readbuff,100,(FILE*)file);
    printf("file read result:%s\r\n",readbuff);

    //读取指定的位置的字符
    int i;
    for(i=0;i<10;i++){
     char c= fgetc(file);
     printf("fgetc:%s\r\n",c);
    }

   //关闭文件
    fclose(file);
}
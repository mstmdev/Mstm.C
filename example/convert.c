#include<stdio.h>

int main(){
    //数据强制转换
    double money=100.7234;
    int int_money=(int)money;
    printf("money=%.4f  int_money=%d \r\n",money,int_money);

    int num=100;
    char c='h';
    int int_sum=num+c;
    float float_sum=num+c;
    printf("num=%d c=%c int_sum=%d float_sum=%f \r\n",num,c,int_sum,float_sum);
}
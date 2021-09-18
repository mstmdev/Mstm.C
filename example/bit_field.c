#include <stdio.h>

struct
{
    unsigned int is_validate; //int 为32位 4字节
    unsigned int type;        //int 为32位 4字节
} status1;

struct
{
    unsigned int is_validate : 1; //1个位
    unsigned int type : 2;        //1个位
    unsigned int tmp1 : 10;       //10个位 最大值为1023，即二进制的1111111111
    unsigned int tmp2 : 10;       //10个位
    unsigned int tmp3 : 10;       //10个位
    unsigned int tmp4 : 1;        //1个位
} status2;

struct
{
    unsigned int is_validate : 1; //1个位
    unsigned int type : 2;        //1个位
    unsigned int tmp1 : 30;
    unsigned int tmp2 : 3;
} status3;

int main()
{
    //status1 sizeof is 8
    printf("status1 sizeof is %d\r\n", sizeof(status1));
    //status2 sizeof is 4
    //所有成员总的大小不超过32位（4字节），所以大小为4字节
    //如果所有成员总的大小为33位,则大小为8字节
    //依次类推
    printf("status2 sizeof is %d\r\n", sizeof(status2));

    printf("status2.type=%d\r\n", status2.type);
    status2.type = 1;
    printf("status2.type=%d\r\n", status2.type);
    //超过了定义的最大值，编译报错
    // status2.type = 2;
    printf("status2.type=%d\r\n", status2.type);

    status2.tmp1 = 1023;
    printf("status2.tmp1=%d\r\n", status2.tmp1);
    //超过了定义的最大值，编译报错
    // status2.tmp1 = 1024;
    printf("status2.tmp1=%d\r\n", status2.tmp1);

    //查看status的大小 12字节
    //虽然status3中总的大小为36位，照理说status3大小应该是8字节
    //但是tmp1的大小为30位,与is_validate和type总的大小为33位，超过了32位
    //所以tmp1会新开辟一个新的4字节单元
    //同上，tmp1和tmp2，大小同样为33位，也是超过了4字节
    //所以tmp2同样的会新开辟一个新的4字节单元
    //总计12字节
    printf("status3 sizeof=%d \r\n", sizeof(status3));
}
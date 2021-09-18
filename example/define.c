#include <stdio.h>
#define Hi "HelloWorld"
#define TURE "It Is True"
// 删除一个自定义宏
//#undef TURE

int main()
{
    //C 预处理器（C Preprocessor）简写为 CPP
    printf("define test: %s\r\n", Hi);
    printf("define test: %s\r\n", TURE);

    //打印预编译宏
    printf("__DATE__:%s\r\n",__DATE__);
    printf("__TIME__:%s\r\n",__TIME__);
    printf("__FILE__:%s\r\n",__FILE__);
    printf("__STDC__:%s\r\n",__STDC__);
}
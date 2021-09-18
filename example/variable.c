#include <stdio.h>

int main()
{
    int x, y, z;
    z = x * y;
    x = 100;
    y = 21;
    z = x * y;
    printf("%d * %d=%d \r\n", x, y, z);
}
#include <stdio.h>

int main()
{
    int num_array[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        num_array[i] = (i + 1) * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("print %d  -- %d \r\n", i, num_array[i]);
    }
}
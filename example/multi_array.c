#include <stdio.h>

int main()
{
    //{1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}
    //{1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}
    //{1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}  {1,2,3,4,5}
    int array[3][4][5];
    int x, y, z;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            for (z = 0; z < 5; z++)
            {
                array[x][y][z] = z + 1;
            }
        }
    }

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            for (z = 0; z < 5; z++)
            {
                printf("%d %d %d --> %d \r\n", x, y, z, array[x][y][z]);
            }
        }
    }
}
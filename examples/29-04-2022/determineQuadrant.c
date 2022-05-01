#include <stdio.h>
/*
    Determine quadrant from the given coordinates
    rules
        first quadrant: (+,+)
        second quadrant: (-,+)
        third quadrant: (-,-)
        fourth quadrant: (+,-)
*/
int main()
{
    int x, y;
    printf("Enter coordinate in (x,y) format: ");
    scanf("(%d,%d)", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("(%d,%d) lies in the origin\n", x, y);
    }
    else if (x == 0 || y == 0)
    {
        printf("(%d,%d) doesn't lie in any quadrant\n", x, y);
    }
    else if (x >= 1)
    {
        if (y >= 1)
        {
            printf("(%d,%d) lies in first quadrant\n", x, y);
        }
        else
        {
            printf("(%d,%d) lies in fourth quadrant\n", x, y);
        }
    }
    else
    {
        if (y >= 1)
        {
            printf("(%d,%d) lies in second quadrant\n", x, y);
        }
        else
        {
            printf("(%d,%d) lies in third quadrant\n", x, y);
        }
    }
    return 0;
}
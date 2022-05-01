#include <stdio.h>
/*
    Program determine whether the given triangle is equilateral,isosceles,scalene
*/
int main()
{
    // declare sides of triangle
    float a, b, c;
    printf("Enter sides of triangle separated by comma: ");
    scanf("%f,%f,%f", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("It is an equilateral triangle\n");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("It is an isosceles triangle\n");
    }
    else
    {
        printf("It is scalene triangle\n");
    }
    return 0;
}
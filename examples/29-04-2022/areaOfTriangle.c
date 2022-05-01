#include <stdio.h>
#include <math.h>
/*
    Program to calculate area of triangle when three sides are given
    forumla = (s(s-a)(s-b)(s-c))^1/2; where s = semi perimeter;
*/
int main()
{
    float a, b, c, s, area;
    printf("Enter sides of triangle separated by space: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = pow(s * (s - a) * (s - b) * (s - c),0.5);
    printf("Area of triangle is %.2f\n", area);
    return 0;
}
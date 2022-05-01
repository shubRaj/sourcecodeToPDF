#include <stdio.h>
/*
    Program to calculate the perimeter of rectangle
    formula: 2(l+w)
*/
int main()
{
    float l, w, p;
    printf("Enter Length And Width Of Rectange In Meter: ");
    scanf("%f %f", &l, &w);
    p = 2 * (l + w);
    printf("Perimeter of rectange is %.2f\n", p);
    return 0;
}
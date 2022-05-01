#include <stdio.h>
/*
    simple program to convert centigrade to fahrenheit
    relation between C and F,
    f = (9c/5)+32
*/
int main()
{
    float c, f;
    printf("Enter Temperature In Centigrade: ");
    scanf("%f", &c);
    f = (9 * c / 5) + 32;
    printf("%.2f°C is equivalent to %.2f°F\n", c, f);
    return 0;
}
#include <stdio.h>
/*
    Program to calculate sum and average from the 10 integer user input
*/
int main()
{
    float a, sum = 0, average;
    for (int i = 1; i < 11; i++)
    {
        printf("Enter Number (%d/10): ", i);
        scanf("%f", &a);
        sum += a;
    }
    printf("Sum: %.2f\nAverage: %.2f\n", sum, (sum / 10));
    return 0;
}
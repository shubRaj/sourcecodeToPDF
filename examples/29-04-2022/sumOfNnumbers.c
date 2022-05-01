#include <stdio.h>
/*
    This program merely calculates the sum of N numbers
    formula = n(n+1)/2
*/
int main()
{
    int n;
    float sum;
    printf("Enter number to calculate it's sum: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of first %d number is %.2f\n", n, sum);
    return 0;
}
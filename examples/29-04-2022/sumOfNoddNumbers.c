#include <stdio.h>
/*
    Program to calculate sum of N given odd natural number
    formula = n^2
*/
int main()
{
    int n;
    float sum;
    printf("Enter number the nth term: ");
    scanf("%d", &n);
    sum = n * n;
    printf("Sum of first %d odd number is %.2f\n", n, sum);
    return 0;
}
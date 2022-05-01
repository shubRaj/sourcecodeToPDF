#include <stdio.h>
/*
    Program to find power of x i.e x^n using for loop
*/
int main()
{
    float x, product = 1;
    int n;
    printf("Enter number and it's power separated by ^: ");
    scanf("%f^%d", &x, &n);
    for (int _ = 0; _ < n; _++) // throwable variable
    {
        product *= x;
    }
    printf("%.2f^%d = %.2f\n", x, n, product);
    return 0;
}
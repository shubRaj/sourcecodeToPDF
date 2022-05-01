#include <stdio.h>
/*
    Program to find factorial
    example:
        5! = 5*4*3*2*1 = 120
*/
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter number to compute it's factorial: ");
    scanf("%d", &n);
    printf("%d! is %d\n", n, factorial(n));
    return 0;
}
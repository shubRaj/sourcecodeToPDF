#include <stdio.h>
/*
    This Program calculates the fibonacci series upto nth given terms
    formula
    fn = fn-1+fn-2
*/
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("Enter Nth term for fibonacci series: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}
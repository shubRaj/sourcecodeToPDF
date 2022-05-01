#include <stdio.h>
/*
    This program just checks whether two given integers are equal or not
*/
int main()
{
    int a, b;
    printf("Enter Two Integers Separated by space: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d equals %d\n", a, b);
    else
        printf("%d doesn't equal %d\n", a, b);
    return 0;
}
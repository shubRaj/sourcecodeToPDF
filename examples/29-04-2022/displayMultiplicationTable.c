#include <stdio.h>
/*
    Display multiplication table of given integer
*/
int main()
{
    int num;
    printf("Enter number to display it's multiplication table: ");
    scanf("%d", &num);
    printf("\e[1;1H\e[2J"); // clear screen on linux using ansi escapse codes
    printf("Table of %d\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, (num * i));
    }
}

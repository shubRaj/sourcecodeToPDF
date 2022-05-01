#include <stdio.h>
/*
    Program to check whether the given character is alphabet, digit or special character
*/
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("'%c' is an alphabet\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("'%c' is digit\n", c);
    }
    else if ((c >= 32 && c <= 47) || (c >= 58 && c <= 64) || (c >= 123 && c <= 126))
    {
        printf("'%c' falls under special characters\n", c);
    }
    return 0;
}
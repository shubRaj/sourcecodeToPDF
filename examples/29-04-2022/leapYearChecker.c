#include <stdio.h>
/*
    Checks if the given year is leap
*/
int leapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
        }
        else
            return 1;
    }
    return 0;
}
int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%4d", &year);
    if (leapYear(year))
        printf("%4d is leap year\n", year);
    else
        printf("%4d is not leap year\n", year);
    return 0;
}
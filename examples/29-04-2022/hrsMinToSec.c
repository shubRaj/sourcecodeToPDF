#include <stdio.h>
/*
    Program to calculate total seconds for hrs and mins as input
*/
int main()
{
    int hours, mins, secs;
    printf("Enter Hrs and Mins: ");
    scanf("%d %d", &hours, &mins);
    secs = (hours * 60 * 60) + (mins * 60);
    printf("Total Seconds: %d\n", secs);
    return 0;
}
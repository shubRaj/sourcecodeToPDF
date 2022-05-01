#include <stdio.h>
/*
    Calculates hours and mins from given numbers of input
*/
int main()
{
    int mins, hours, remainingMins;
    printf("Enter Number of Minutes: ");
    scanf("%d", &mins);
    hours = mins / 60;
    remainingMins = mins % 60;
    printf("Hours: %d\nMins: %d\n", hours, remainingMins);
    return 0;
}
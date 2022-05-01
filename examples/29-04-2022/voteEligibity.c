#include <stdio.h>
/*
    Finds whether person of given age is eligible to vote in an upcoming election or not
*/
int main()
{
    int age;
    printf("How young are you?: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You're eligible to vote.\n");
    }
    else
    {
        printf("You're still minor.\n");
    }
    return 0;
}
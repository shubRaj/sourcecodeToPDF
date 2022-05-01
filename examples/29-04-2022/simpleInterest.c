#include <stdio.h>
/*
    This programs calculates simple interest
    formula,
        I = (P x T x R ) / 100
*/
int main()
{
    float p, t, r, i;
    printf("Enter Principal,Time and Rate separated by comma: ");
    scanf("%f,%f,%f", &p, &t, &r);
    i = (p * t * r) / 100;
    printf("Interest Accured: %.2f\n", i);
    return 0;
}
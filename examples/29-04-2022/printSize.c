#include <stdio.h>
/*
    Program to print size of data type
*/
int main()
{
    int choice, size;
    printf("Choose from 1-5\n\
    \r1. int\n\
    \r2. char\n\
    \r3. float\n\
    \r4. double\n\
    \r5. long double\n\
    \r6. long long\n\
    \r# ");
    scanf("%2d", &choice);
    switch (choice)
    {
    case 1:
        printf("size of data type 'int' is %d bytes \n", sizeof(int));
        break;
    case 2:
        printf("size of data type 'char' is %d bytes \n", sizeof(char));
        break;
    case 3:
        printf("size of data type 'float' is %d bytes \n", sizeof(float));
        break;
    case 4:
        printf("size of data type 'double' is %d bytes \n", sizeof(double));
        break;
    case 5:
        printf("size of data type 'long double' is %d bytes \n", sizeof(long double));
        break;
    case 6:
        printf("size of data type 'long long' is %d bytes \n", sizeof(long long));
        break;
    default:
        printf("Invalid Input\n");
    }
    return 0;
}
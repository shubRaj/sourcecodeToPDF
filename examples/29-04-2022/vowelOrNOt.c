#include <stdio.h>
/*
    Simple Program To Check Whether Given Program Is Vowel
*/
int isVowel(char c)
{
    char VOWELS[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < sizeof(VOWELS); i++)
    {
        if (c == VOWELS[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (isVowel(c))
    {
        printf("'%c' is vowel\n", c);
    }
    else
    {
        printf("'%c' is not vowel\n", c);
    }
    return 0;
}
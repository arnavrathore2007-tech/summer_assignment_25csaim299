#include <stdio.h>

int main()
{
    char a[100], b[100], c;
    int d[256] = {0}, i;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    for(i = 0; a[i] != '\0'; i++)
    {
        d[a[i]]++;
    }

    for(i = 0; b[i] != '\0'; i++)
    {
        d[b[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(d[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram Strings");

    return 0;
}
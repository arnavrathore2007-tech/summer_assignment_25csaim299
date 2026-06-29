#include <stdio.h>

int main()
{
    char a[200];
    int b = 0, c = 1;

    printf("Enter a sentence: ");
    gets(a);

    while(a[b] != '\0')
    {
        if(a[b] == ' ')
        {
            c++;
        }

        b++;
    }

    printf("Total Words = %d", c);

    return 0;
}
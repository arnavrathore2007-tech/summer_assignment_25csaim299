#include <stdio.h>

int main()
{
    char a[100];
    int b, c, d;

    printf("Enter a string: ");
    gets(a);

    for(b = 0; a[b] != '\0'; b++)
    {
        d = 1;

        for(c = 0; a[c] != '\0'; c++)
        {
            if(b != c && a[b] == a[c])
            {
                d = 0;
                break;
            }
        }

        if(d == 1)
        {
            printf("First Non-Repeating Character = %c", a[b]);
            return 0;
        }
    }

    printf("No Non-Repeating Character");

    return 0;
}
#include <stdio.h>

int main()
{
    char a[100];
    int b, c = 0;

    printf("Enter a string: ");
    gets(a);

    for(b = 0; a[b] != '\0'; b++)
    {
        if(a[b] != ' ')
        {
            a[c] = a[b];
            c++;
        }
    }

    a[c] = '\0';

    printf("String = %s", a);

    return 0;
}
#include <stdio.h>

int main()
{
    char a[100], b;
    int c = 0, d;

    printf("Enter a string: ");
    gets(a);

    while(a[c] != '\0')
    {
        c++;
    }

    for(d = 0; d < c / 2; d++)
    {
        b = a[d];
        a[d] = a[c - d - 1];
        a[c - d - 1] = b;
    }

    printf("Reversed String = %s", a);

    return 0;
}
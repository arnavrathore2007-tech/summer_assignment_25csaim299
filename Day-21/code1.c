#include <stdio.h>

int main()
{
    char a[100];
    int b = 0;

    printf("Enter a string: ");
    gets(a);

    while(a[b] != '\0')
    {
        b++;
    }

    printf("Length = %d", b);

    return 0;
}
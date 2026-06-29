#include <stdio.h>

int main()
{
    char a[100];
    int b = 0;

    printf("Enter a string: ");
    gets(a);

    while(a[b] != '\0')
    {
        if(a[b] >= 'a' && a[b] <= 'z')
        {
            a[b] = a[b] - 32;
        }

        b++;
    }

    printf("Uppercase String = %s", a);

    return 0;
}
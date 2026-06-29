#include <stdio.h>

int main()
{
    char a[100];
    int b = 0, c, d = 1;

    printf("Enter a string: ");
    gets(a);

    while(a[b] != '\0')
    {
        b++;
    }

    for(c = 0; c < b / 2; c++)
    {
        if(a[c] != a[b - c - 1])
        {
            d = 0;
            break;
        }
    }

    if(d == 1)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}
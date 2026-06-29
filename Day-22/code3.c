#include <stdio.h>

int main()
{
    char a[100], b;
    int c = 0, d = 0;

    printf("Enter a string: ");
    gets(a);

    printf("Enter character: ");
    scanf("%c", &b);

    while(a[c] != '\0')
    {
        if(a[c] == b)
        {
            d++;
        }

        c++;
    }

    printf("Frequency = %d", d);

    return 0;
}
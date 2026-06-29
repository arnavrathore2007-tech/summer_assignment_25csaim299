#include <stdio.h>

int main()
{
    char a[100],b[100];
    int c,d;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    printf("Common Characters:\n");

    for(c=0;a[c]!='\0';c++)
    {
        for(d=0;b[d]!='\0';d++)
        {
            if(a[c]==b[d])
            {
                printf("%c ",a[c]);
                break;
            }
        }
    }

    return 0;
}
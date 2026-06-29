#include <stdio.h>

int main()
{
    char a[100];
    int b,c,d;

    printf("Enter a string: ");
    gets(a);

    printf("String = ");

    for(b=0;a[b]!='\0';b++)
    {
        d=0;

        for(c=0;c<b;c++)
        {
            if(a[b]==a[c])
            {
                d=1;
                break;
            }
        }

        if(d==0)
            printf("%c",a[b]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char a[100];
    int b=1,i;

    printf("Enter a string: ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            b++;
        }
        else
        {
            printf("%c%d",a[i],b);
            b=1;
        }
    }

    return 0;
}
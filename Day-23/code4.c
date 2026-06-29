#include <stdio.h>

int main()
{
    char a[100], b;
    int c[256]={0}, i, d=0;

    printf("Enter a string: ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        c[a[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(c[i]>d)
        {
            d=c[i];
            b=i;
        }
    }

    printf("Maximum Occurring Character = %c",b);

    return 0;
}
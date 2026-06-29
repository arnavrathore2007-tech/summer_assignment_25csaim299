#include <stdio.h>

int main()
{
    char a[200], b[100];
    int c=0,d=0,e=0,f=0,i;

    printf("Enter a sentence: ");
    gets(a);

    for(i=0;;i++)
    {
        if(a[i]!=' ' && a[i]!='\0')
        {
            if(c==0)
                f=i;

            c++;
        }
        else
        {
            if(c>d)
            {
                d=c;

                for(e=0;e<c;e++)
                {
                    b[e]=a[f+e];
                }

                b[c]='\0';
            }

            c=0;

            if(a[i]=='\0')
                break;
        }
    }

    printf("Longest Word = %s",b);

    return 0;
}
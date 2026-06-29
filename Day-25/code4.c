#include <stdio.h>
#include <string.h>

int main()
{
    char a[20][50],b[50];
    int c,d,i;

    printf("Enter number of words: ");
    scanf("%d",&c);

    getchar();

    printf("Enter words:\n");

    for(i=0;i<c;i++)
        gets(a[i]);

    for(i=0;i<c-1;i++)
    {
        for(d=i+1;d<c;d++)
        {
            if(strlen(a[i])>strlen(a[d]))
            {
                strcpy(b,a[i]);
                strcpy(a[i],a[d]);
                strcpy(a[d],b);
            }
        }
    }

    printf("Words Sorted by Length:\n");

    for(i=0;i<c;i++)
        puts(a[i]);

    return 0;
}
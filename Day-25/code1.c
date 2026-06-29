#include <stdio.h>

int main()
{
    int a[100],b[100],c[200];
    int d,e,f=0,g=0,h=0;

    printf("Enter size of first array: ");
    scanf("%d",&d);

    printf("Enter elements:\n");

    for(f=0;f<d;f++)
        scanf("%d",&a[f]);

    printf("Enter size of second array: ");
    scanf("%d",&e);

    printf("Enter elements:\n");

    for(f=0;f<e;f++)
        scanf("%d",&b[f]);

    f=0;

    while(f<d && g<e)
    {
        if(a[f]<b[g])
            c[h++]=a[f++];
        else
            c[h++]=b[g++];
    }

    while(f<d)
        c[h++]=a[f++];

    while(g<e)
        c[h++]=b[g++];

    printf("Merged Array:\n");

    for(f=0;f<h;f++)
        printf("%d ",c[f]);

    return 0;
}
#include <stdio.h>

int main()
{
    int a[100], b, c = 0, d, i;

    printf("Enter how many elements: ");
    scanf("%d", &b);

    printf("Enter elements:\n");
    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < b; i++)
    {
        if(a[i] != 0)
        {
            a[c] = a[i];
            c++;
        }
    }

    while(c < b)
    {
        a[c] = 0;
        c++;
    }

    printf("Array after moving zeroes:\n");

    for(i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
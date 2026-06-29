#include <stdio.h>

int main()
{
    int a[100], b, c, d, e;

    printf("Enter how many elements: ");
    scanf("%d", &b);

    printf("Enter elements:\n");

    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }

    printf("Array after removing duplicates:\n");

    for(c = 0; c < b; c++)
    {
        e = 0;

        for(d = 0; d < c; d++)
        {
            if(a[c] == a[d])
            {
                e = 1;
                break;
            }
        }

        if(e == 0)
        {
            printf("%d ", a[c]);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[100], b, c, d, e = 0, f;

    printf("Enter how many elements: ");
    scanf("%d", &b);

    printf("Enter elements:\n");

    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }

    for(c = 0; c < b; c++)
    {
        int g = 1;

        for(d = c + 1; d < b; d++)
        {
            if(a[c] == a[d])
            {
                g++;
            }
        }

        if(g > e)
        {
            e = g;
            f = a[c];
        }
    }

    printf("Maximum frequency element = %d", f);
    printf("\nFrequency = %d", e);

    return 0;
}
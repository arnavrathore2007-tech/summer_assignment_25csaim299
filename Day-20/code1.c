#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int d, e, f, i, j, k;

    printf("Enter rows of first matrix: ");
    scanf("%d", &d);

    printf("Enter columns of first matrix: ");
    scanf("%d", &e);

    printf("Enter columns of second matrix: ");
    scanf("%d", &f);

    printf("Enter first matrix:\n");

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < e; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < e; i++)
    {
        for(j = 0; j < f; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < f; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < e; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication Matrix:\n");

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < f; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
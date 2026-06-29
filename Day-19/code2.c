#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int d, e, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &d);

    printf("Enter number of columns: ");
    scanf("%d", &e);

    printf("Enter first matrix:\n");

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < e; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < e; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Subtraction of matrices:\n");

    for(i = 0; i < d; i++)
    {
        for(j = 0; j < e; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
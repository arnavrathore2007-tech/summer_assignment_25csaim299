#include <stdio.h>

int main()
{
    int a[10][10];
    int b, i, j, c = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &b);

    printf("Enter matrix:\n");

    for(i = 0; i < b; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < b; i++)
    {
        for(j = 0; j < b; j++)
        {
            if(a[i][j] != a[j][i])
            {
                c = 0;
            }
        }
    }

    if(c == 1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");

    return 0;
}
#include <stdio.h>

int main()
{
    char a[10][50];
    int b[10];
    float c[10];
    int d, i;

    printf("Enter Number of Employees: ");
    scanf("%d", &d);

    for(i = 0; i < d; i++)
    {
        printf("\nEnter Employee Name: ");
        scanf("%s", a[i]);

        printf("Enter Employee ID: ");
        scanf("%d", &b[i]);

        printf("Enter Salary: ");
        scanf("%f", &c[i]);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < d; i++)
    {
        printf("Name : %s\n", a[i]);
        printf("ID : %d\n", b[i]);
        printf("Salary : %.2f\n\n", c[i]);
    }

    return 0;
}
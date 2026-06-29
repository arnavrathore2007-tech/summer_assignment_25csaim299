#include <stdio.h>

int main()
{
    char a[50];
    int b;
    float c;

    printf("Enter Employee Name: ");
    scanf("%s", a);

    printf("Enter Employee ID: ");
    scanf("%d", &b);

    printf("Enter Employee Salary: ");
    scanf("%f", &c);

    printf("\n----- Employee Record -----\n");
    printf("Name : %s\n", a);
    printf("ID : %d\n", b);
    printf("Salary : %.2f\n", c);

    return 0;
}
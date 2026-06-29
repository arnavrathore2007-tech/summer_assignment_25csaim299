#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter Basic Salary: ");
    scanf("%f", &a);

    b = a * 0.20;
    c = a + b;

    printf("\nBasic Salary : %.2f\n", a);
    printf("Bonus : %.2f\n", b);
    printf("Total Salary : %.2f\n", c);

    return 0;
}
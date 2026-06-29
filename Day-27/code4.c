#include <stdio.h>

int main()
{
    char a[50];
    int b, c, d, e, f;
    float g;

    printf("Enter Student Name: ");
    scanf("%s", a);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &b);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &c);

    printf("Enter Marks of Subject 3: ");
    scanf("%d", &d);

    e = b + c + d;
    g = e / 3.0;

    printf("\n----- Marksheet -----\n");
    printf("Name : %s\n", a);
    printf("Total Marks : %d\n", e);
    printf("Percentage : %.2f\n", g);

    if(g >= 90)
        printf("Grade : A");
    else if(g >= 75)
        printf("Grade : B");
    else if(g >= 50)
        printf("Grade : C");
    else
        printf("Grade : Fail");

    return 0;
}
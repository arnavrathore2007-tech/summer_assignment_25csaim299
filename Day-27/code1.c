#include <stdio.h>

int main()
{
    char a[50];
    int b,c,d,e,f;

    printf("Enter Student Name: ");
    scanf("%s",a);

    printf("Enter Roll Number: ");
    scanf("%d",&b);

    printf("Enter Marks of Subject 1: ");
    scanf("%d",&c);

    printf("Enter Marks of Subject 2: ");
    scanf("%d",&d);

    printf("Enter Marks of Subject 3: ");
    scanf("%d",&e);

    f=c+d+e;

    printf("\n------Student Record------\n");

    printf("Name : %s\n",a);
    printf("Roll Number : %d\n",b);
    printf("Total Marks : %d\n",f);
    printf("Percentage : %.2f\n",(float)f/3);

    return 0;
}
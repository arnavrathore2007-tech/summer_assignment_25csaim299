#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[200];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    strcpy(c,a);
    strcat(c,a);

    if(strlen(a)==strlen(b) && strstr(c,b)!=NULL)
        printf("String is Rotation");
    else
        printf("String is Not Rotation");

    return 0;
}
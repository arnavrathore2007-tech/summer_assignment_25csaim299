#include <stdio.h>

int main()
{
    char a[100];
    int b = 0, c = 0, d = 0;

    printf("Enter a string: ");
    gets(a);

    while(a[b] != '\0')
    {
        if((a[b] >= 'A' && a[b] <= 'Z') || (a[b] >= 'a' && a[b] <= 'z'))
        {
            if(a[b]=='A'||a[b]=='E'||a[b]=='I'||a[b]=='O'||a[b]=='U'||
               a[b]=='a'||a[b]=='e'||a[b]=='i'||a[b]=='o'||a[b]=='u')
                c++;
            else
                d++;
        }

        b++;
    }

    printf("Vowels = %d\n", c);
    printf("Consonants = %d", d);

    return 0;
}
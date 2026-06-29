#include <stdio.h>

int main()
{
    int a,b=0;

    printf("Quiz Application\n");

    printf("\n1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Jaipur\n4. Chennai\n");

    printf("Enter Answer: ");
    scanf("%d",&a);

    if(a==1)
    {
        b++;
    }

    printf("\n2. 5 + 10 = ?\n");
    printf("1. 12\n2. 15\n3. 20\n4. 25\n");

    printf("Enter Answer: ");
    scanf("%d",&a);

    if(a==2)
    {
        b++;
    }

    printf("\n3. C Language was developed by?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Elon Musk\n4. Bill Gates\n");

    printf("Enter Answer: ");
    scanf("%d",&a);

    if(a==2)
    {
        b++;
    }

    printf("\nTotal Score = %d/3",b);

    return 0;
}
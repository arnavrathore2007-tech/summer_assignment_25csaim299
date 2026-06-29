#include <stdio.h>

int main()
{
    int a, b = 45;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &a);

        if(a > b)
        {
            printf("Too High\n");
        }
        else if(a < b)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Correct Guess!\n");
        }

    }while(a != b);

    return 0;
}
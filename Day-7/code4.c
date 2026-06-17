#include <stdio.h>

int rev = 0;

void reverseNum(int num)
{
    if (num == 0)
  return;

    rev = rev * 10 + (num % 10);

    reverseNum(num / 10);
}

int main()
{
    int num;
  
         printf("Enter a number: ");
    scanf("%d", &num);

reverseNum(num);
    printf("Reverse number = %d", rev);

    return 0;
}
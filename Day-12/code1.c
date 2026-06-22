#include <stdio.h>
int palindrome(int b){
    int c,d=0 ;
    
        while (b%10 != 0){
            c= b%10;
            d= d*10 + c;
            b= b/10;
        }
    return d;
}
int main(){
    int a;
    printf("Enter the number to check for palindrome: ");
    scanf("%d", &a);
    if (a<10){
        printf("The number is a palindrome\n");
    }
    else{
        palindrome(a);
        if (palindrome(a)== a){
            printf("The number is palindrome\n");
        }else{
            printf("The number is not a palindrome\n");
        }
    }


    return 0;
}
#include <stdio.h>
int main(){
    int a,b,c,sum=0 ;
    printf("Enter the number: ");
    scanf("%d", &a);
    for (int i =1 ; i<a; i++){
        c= a%i;
        if (c == 0){
            printf("%d", i );
            sum = sum + i;
        }
    }

    printf("\n");
    printf("%d", sum);
    printf("\n");
 if ( a == sum)
 {
    printf("The entered number is a perfect number ");
 }else{
    printf(" Not a perfect number");
 }
 
    return 0;
}
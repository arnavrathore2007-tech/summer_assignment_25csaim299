#include <stdio.h>
int main(){
    int a,b,c,sum=0 ;
    printf("Enter the number: ");
    scanf("%d", &a);
    for (int i =1 ; i<a; i++){
        c= a%i;
        if (c == 0){
            b=i;
        }
        a= a/i;
        
    }
    printf("%d", b);

    return 0;
}
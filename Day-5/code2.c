#include <stdio.h>
int factorial(int a){
    int b=1; 
    for (int i =1 ; i<=  a; i++){
        b = b*i;
    }
         return b;
}
int main(){
    int a,b=0,c;
    printf(" Enter a number ");
    scanf("%d", &a);
    while (a>0){
        c= factorial(a%10); 
        b = b+ c;
        a=a/10;
    }
    printf("%d \n", b);

    if (b == a){
        printf(" The number is a strong number ");
    }else{
        printf(" Not a strong number");
    }

    return 0;
    
}
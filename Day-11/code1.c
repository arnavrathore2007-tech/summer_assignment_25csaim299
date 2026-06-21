#include <stdio.h>
 int sum(int a, int b){
    int c;
    c = a+b;
    printf("%d",c);
 }
int main(){
    int a,b ;
    printf("Enter the first number ");
    scanf("%d %d", &a, &b);
    sum (a,b);
    
    return 0;
}
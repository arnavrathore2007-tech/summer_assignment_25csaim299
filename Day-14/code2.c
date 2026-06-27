#include <stdio.h>
int main (){
    int a, b  ,d;
    printf("Enter how many numbers you are going to enter: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the numbers ");
    for (int i = 0; i<a; i++){
        scanf ("%d", &arr[i]);
    }
    int c=0 ;
    printf("You want the frequency of which number: ");
    scanf("%d", &b);
    for (int j =0; j<a; j++){
        if (arr[j]==b){
            c++ ; 
        }
    }
    printf("You desired number -%d- is printed %d times", b,c);


    return 0;
}
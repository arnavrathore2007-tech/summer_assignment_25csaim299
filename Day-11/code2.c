#include <stdio.h>
int main(){
    int a;
    printf("How much numbers you are going to enter: ");
    scanf("%d", &a);
    printf("Enter the numbers one by one \n");
    int arr[a];
    for (int i= 0 ;i<a ; i++){
        scanf("%d", &arr[i]);
    }
    for (int j= 0; j<a; j++){
        if (arr[j]>arr[0]){
            arr[0]= arr[j];
        }
       
    }
    printf("The maximum number in the digit is %d", arr[0]);
    return 0;
}
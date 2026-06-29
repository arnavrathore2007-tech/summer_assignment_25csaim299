#include <stdio.h>
int main(){
    int a;
    printf("How many numbers you are going to enter:\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the numbers:\n");
    for (int i=0 ; i<a; i++){
      scanf("%d", &arr[i]);
    }
    printf("The elemets you printed are: \n");

    for (int j =0 ; j<a; j++){
        printf("%d, ", arr[j]);
    }


    printf("\n");
    printf("REVERSED ARRAY IS:\n");
    int c= a-1;
    for (int k = c ; k >=0 ; k--){
        printf("%d, ", arr[k]);
    }


    return 0;
}
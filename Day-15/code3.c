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
    int b = arr[a-1];
    for (int k=0; k<a-1;k++){
        arr[a-1-k]= arr[a-2-k];
    }
    arr[0]= b;

    printf("RIGHT ROTATED ARRAY\n");
  for (int l =0 ;l <a; l++){
    printf("%d", arr[l]);
  }

    return 0;
}
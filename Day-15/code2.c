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
    int b = arr[0];
    for (int k=0; k<a;k++){
        arr[k]= arr[k+1];
    }
    arr[a-1]= b;

    printf("LEFT ROTATED ARRAY\n");
  for (int l =0 ;l <a; l++){
    printf("%d", arr[l]);
  }

    return 0;
}
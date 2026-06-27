# include <stdio.h>
int main (){
    int a,b;
    printf("Enter the numbers you wan to enter: ");
    scanf("%d",&a );
    int arr[a];
    printf("Enter the elements: ");
    for (int i =0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j =0; j<a-1; j++){
        for (int k =0; k<a-1-j; k++){
            if (arr[k]> arr[k+1]){
                b= arr[k];
                arr[k]= arr[k+1];
                arr[k+1]= b;
            }
        }
    }

    for(int l=0; l<a; l++){
        printf("%d, ", arr[l]);
    }
    printf("\n");
    int count= 1;
    int c=a;
    if (c<2){
       printf("There will be no second largest number in an array of elements less than 2\n");
    }
    while (arr[a-1]== arr[a-2])
    {
        count++;
        a--;
        if(count == c){
            printf("There will be no second largest number if all elements are same \n");
        }
        if (a==1){
            break;
        }
    }
 if (count <c){
    printf("The second largest number is %d\n", arr[c-count-1]);
 }


 return 0;
}
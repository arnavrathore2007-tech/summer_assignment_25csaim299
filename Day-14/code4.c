#include <stdio.h>

int main(){
    int a;
    printf("How many numbers are you going to enter: ");
    scanf("%d", &a);
    int arr[a];
    
    printf("Print the numbers: \n");
    for (int i = 0; i<a; i++){
        scanf ("%d", &arr[i]);
    }
    
    int count = 0;
    
    for (int j = 0; j<a; j++){
        int counted = 0; 
        
        for (int k = 0; k<a; k++){
 if (arr[j] == arr[k]){
                
            
    if (k < j) {
        counted = 1; 
     break;               
 }
                
    count++; 
    }
}
        
        if (counted == 0 && count > 1) {
        printf("%d is printed %d times \n", arr[j], count);
        }
        
        count = 0;
    }
    return 0;
}
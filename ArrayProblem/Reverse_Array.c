// Reverse the Array
// Print the array in reverse order.
#include<stdio.h>
int main(){
    int arr[6];
    printf("Enter array element ");
    for(int i=0; i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse of array\n");
    for(int i= 5;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
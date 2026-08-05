//  Largest Element
// Find the largest element in an array.
#include<stdio.h>
int main(){
    int arr[5];
printf("Enter number ");

for(int i = 0; i<5; i++){
    scanf("%d",&arr[i]);
}    
    int largest = arr[0];

for(int i = 0; i<5; i++){
  if(arr[i]>largest){
    largest = arr[i];

  }

} 
printf("largest number in array = %d",largest);
}
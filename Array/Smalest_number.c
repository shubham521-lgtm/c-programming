// Smallest Element
// Find the smallest element in an array.
#include<stdio.h>
int main(){
    int arr[5];
printf("Enter number ");

for(int i = 0; i<5; i++){
    scanf("%d",&arr[i]);
}    
    int smallest = arr[0];

for(int i = 0; i<5; i++){
  if(arr[i]<smallest){
    smallest = arr[i];

  }

} 
printf("smallest number in array = %d",smallest);
}
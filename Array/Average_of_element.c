// Average of Array
// Find the average of all elements in an array.
#include<stdio.h>
int main(){
    int arr[5];
    int sum = 0;

    printf("5 number array ");
    for(int i =0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++){
        sum = sum +arr[i];
    }

    int average = sum/5;

    printf("average of array is = %d ",average);
    return 0;
}
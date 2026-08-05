
#include<stdio.h>
int main(){
    int arr[10];
    int sum = 0;

    printf("Enter 10 number = ");
     
    for(int i =0; i<10; i++){
    scanf("%d " , &arr[i]);

    }
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }

    printf("sum of 10 numbers = %d",sum);
    return 0;
}
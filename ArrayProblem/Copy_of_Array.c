// Copy One Array to Another

// Copy all elements into a second array and print it.

#include<stdio.h>
int main(){
    int arr[4] = {1, 2 ,3 , 4};
    int array[4];
    for(int i=0;i<4;i++){
     array[i]=arr[i];
    }
    for(int i=0;i<4;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
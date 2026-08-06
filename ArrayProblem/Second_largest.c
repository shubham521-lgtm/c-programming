// Find Second Largest Element
#include<stdio.h>
int main(){
    int arr[5] = {3 ,4 ,6 ,7 ,9};
    int Largest =arr[0] ;
    int SecondLargest =arr[0];
    
    printf("Second Largest numabr = ");
    for(int i=0;i<5;i++){
        if(arr[i]>Largest){
            Largest=arr[i];
        }
        else if(Largest>SecondLargest){
            SecondLargest=Largest;
        }
    }
    printf("%d",SecondLargest);
}
#include<stdio.h>

int main() {
    int arr[5] = {3, 4, 6, 7, 9};

    int Largest = arr[0];
    int SecondLargest = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > Largest) {
            SecondLargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i] > SecondLargest && arr[i] != Largest) {
            SecondLargest = arr[i];
        }
    }

    printf("Second Largest number = %d", SecondLargest);

    return 0;
}
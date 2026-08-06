//  Search an Element
// Input a number and check whether it exists in the array.
#include<stdio.h>
int main(){
    int arr[6] = {6 ,5 ,4 ,3 ,2 ,1};
    int num;
    int Found =0;
    printf("Enter a number ");

    scanf("%d",&num);
    for(int i =0;i<6;i++){
        if(arr[i]==num){
         Found = 1;
       break;

        }
    }

    if(Found){
        printf("found number = %d",num);
    }
    else{
        printf("Not found");
    }
return 0;
}
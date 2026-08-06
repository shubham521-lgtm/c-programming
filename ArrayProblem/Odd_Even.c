// 6. Count Even and Odd
// Count how many even and odd numbers are present.

#include<stdio.h>
int main(){
    int arr[7];
    int even=0;
    int odd = 0;
    printf("Enter elements of array ");
for(int i=0;i<7;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<7;i++){
    if(arr[i]%2==0){
    even++;
    }
    else{
        odd++;
    }
}
printf("Even number = %d\n",even);
printf("Odd number = %d\n",odd);

return 0;
}
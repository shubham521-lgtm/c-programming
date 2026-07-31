// 2. Even or Odd
// Write a C program to input an integer and check whether the number is even or odd.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a  number\n");
    scanf("%d",&num);
    

    if(num%2==0){
        printf("number is Even = %d\n",num);
    }
   
    else{
        printf("number is odd");

    }

}
// Write a program to input a 3-digit number and calculate the sum of its digits.


#include<stdio.h>
int main(){
    
    int num ;
    int sum = 0;
    printf("Enter an number = ");
    scanf("%d",&num);
    
     
     while(num!=0){
        int digit = num%10;

        sum = sum + digit;

        num = num/10;
     }
     printf("sum = ");
     printf("%d\n",sum);
    return 0;

}
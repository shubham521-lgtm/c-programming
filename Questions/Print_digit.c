// Write a program to input a 4-digit number and print its digits separately.

// #include<stdio.h>
// int main(){
    
//     int num ;
//     int digits = 0;
//     printf("Enter an number = ");
//     scanf("%d",&num);
    
//     printf(" separataly digits = ");
     
//      while(num!=0){
//         int digit = num%10;
//         digits = digit;

//         num = num/10;
     
//      printf("%d\n",digits);
//      }
     
//     return 0;

// }

#include <stdio.h>

int main() {

    int num;
    int digit;

    printf("Enter a 4-digit number = ");
    scanf("%d", &num);

    printf("Digits separately are:\n");

    // Extract digits from right to left
    digit = num / 1000;
    printf("%d\n", digit);

    digit = (num / 100) % 10;
    printf("%d\n", digit);

    digit = (num / 10) % 10;
    printf("%d\n", digit);

    digit = num % 10;
    printf("%d\n", digit);

    return 0;
}


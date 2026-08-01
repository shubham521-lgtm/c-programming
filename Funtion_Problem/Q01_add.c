
// Add Two Numbers
// add() function banao jo do numbers ko add karke result return kare.

// #include<stdio.h>
// int add(){
//     int a = 33;
//     int b = 88;

//     printf("sum of number = %d",a+b);

// }
// int main(){
//     add();

//     return 0;
// }

#include <stdio.h>

int add() {
    int a = 33;
    int b = 88;

    return a + b;
}

int main() {
    int result;

    result = add();

    printf("Sum of numbers = %d", result);

    return 0;
}








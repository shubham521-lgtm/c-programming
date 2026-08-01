// Largest of Two Numbers
// findLargest() function banao jo do numbers mein se largest number return kare.
// #include<stdio.h>
// void findLargest(){
//     int a = 8;
//     int b = 9;

//     if(a>b){
//         printf("a is largest number = %d",a);
//     }else{
//         printf("b is largest number = %d",b);

//     }

// }
// int main(){
//     findLargest();

//     return 0;
// }

#include <stdio.h>

int findLargest(int a, int b) {

    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int result;

    result = findLargest(8, 9);

    printf("Largest number = %d", result);

    return 0;
}
// find the square root 
// using math function
#include<stdio.h>
#include<math.h>

int main(){
    int a = 9;
    printf("The area of square is %f\n",pow(a,2));

    return 0;
}

#include <stdio.h>

int square(int a) {
    return a * a;
}

int main() {
    int result;

    result = square(9);

    printf("The square of a number = %d\n", result);

    return 0;
}
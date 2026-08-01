// Even or Odd
// checkEvenOdd() function banao jo number even ya odd check kare.

#include <stdio.h>

int checkEvenOdd(int num) {
    return num % 2 == 0;
}

int main() {
    int result;

    result = checkEvenOdd(80);

    if (result == 1) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }

    return 0;
}
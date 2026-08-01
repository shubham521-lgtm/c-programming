// / Subtract Two Numbers
// subtract() function banao jo do numbers ka difference return kare.
// #include <stdio.h>

// int subtract() {
//     int a = 33;
//     int b = 88;

//     return a - b;
// }

// int main() {
//     int difference;

//     difference = subtract();

//     printf("subtract of numbers = %d", difference);

//     return 0;
// }

#include <stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int difference;

    difference = subtract(33, 88);

    printf("Subtract of numbers = %d\n", difference);

    return 0;
}
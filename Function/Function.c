#include <stdio.h>

void add() {
    int a = 10;
    int b = 20;

    printf("Sum = %d", a + b);
}

int main() {
    add();  // Function call

    return 0;
}

// Function syntax 
// int add(int a, int b) {
//     int sum = a + b;
//     return sum;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;

    // Seed the random number generator
    srand(time(0));

    // Generate random number from 0 to 99
    num = rand() % 100;

    printf("Random number = %d\n", num);

    return 0;
}
// / Positive, Negative, or Zero
// checkNumber() function banao jo number positive, negative ya zero check kare.

#include <stdio.h>

void checkNumber(int num) {

    if (num > 0) {
        printf("%d is Positive\n", num);
    }
    else if (num < 0) {
        printf("%d is Negative\n", num);
    }
    else {
        printf("%d is Zero\n", num);
    }
}

int main() {

    checkNumber(0);
    // checkNumber(-10);
    // checkNumber(0);

    return 0;
}
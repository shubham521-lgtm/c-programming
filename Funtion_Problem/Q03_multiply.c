// Multiply Two Numbers
// multiply() function banao jo do numbers ka multiplication return kare.

#include<stdio.h>
int multiply(int a,int b){
    return a*b;

}
int main(){
    int multiplication;
    multiplication = multiply(6,7);

    printf("multiplication of two number = %d ",multiplication);
    return 0;
}
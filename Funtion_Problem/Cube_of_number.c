// Cube of a Number
// cube() function banao jo kisi number ka cube return kare.

#include<stdio.h>
int cube(int a){
  
    return a*a*a;
}

int main(){
    int result;

    result = cube(7);

    printf("cube of a number is = %d",result);
}
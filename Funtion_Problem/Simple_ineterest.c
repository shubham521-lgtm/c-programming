// Calculate Simple Interest
// simpleInterest() function banao jo principal, rate aur time lekar simple interest return kare.

// simple interest formula
// SI=100P×R×T

#include<stdio.h>
int simpleInterest(){
      
    int p = 30000;
    int r = 2;
    int t = 3;
    return (p*r*t)/100;
}
int main(){
int result;
result = simpleInterest();

printf("simple interest = %d",result);
}
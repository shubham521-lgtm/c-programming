// Write a program to input the cost price and selling price of a product and calculate the profit or loss amount. (Don't use if-else; just calculate the difference.)
#include<stdio.h>
int main(){
    int cost;
    int selling;

    printf("Enter cost price\n");
    scanf("%d",&cost);

     printf("Enter salling price\n");
    scanf("%d",&selling);
     
     int difference = selling - cost;

    printf("Profit/Loss amount = %d", difference);

    return 0;
}
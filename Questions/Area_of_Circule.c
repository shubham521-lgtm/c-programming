// Write a program to input the radius of a circle and calculate its area and circumference.

#include<stdio.h>
int main(){
    
    int r;
    printf("redius of an circule\n");
     scanf("%d",&r);
     printf("area of an circule =");

     float area = 3.14*r*r;
     printf("%f\n",area);

       printf("circumference of circule =");
     float circumference = 2*3.14*r;
     printf("%f",circumference);

    return 0;

}
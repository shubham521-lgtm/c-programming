// Extend Question 11
//  to calculate the percentage of the student.

#include<stdio.h>
int main(){
    int physics;
    int chemistry;
    int maths;
    int hindi;
    int English;

    printf("enter marks of physics\n");
    scanf("%d",&physics);
    printf("enter marks of chemistry\n");
    scanf("%d",&chemistry);
   
     printf("enter marks of maths\n");
    scanf("%d",&maths);
     printf("enter marks of hindi\n");
    scanf("%d",&hindi);
    
    printf("enter marks of English\n");
    scanf("%d",&English);

    printf("Total marks =  ");

    int sum = (physics+chemistry+maths+hindi+English);
    float percentage = sum / 5.0;

    printf("Total marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
    return 0 ;

}
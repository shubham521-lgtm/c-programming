#include<stdio.h>
int main(){
    int a , b ,c;

printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
printf("Enter c\n");
scanf("%d",&c);

if(a>b && a>c){
    printf("a is an largest number");
}
else if(b>a && b>c){
    printf("b is an largest number");
}

else {
    printf("c is an largest number");
}
}

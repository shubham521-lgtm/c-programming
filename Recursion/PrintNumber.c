#include<stdio.h>
void integer(int n){

    printf("%d\n",n);
    if(n==10){
        
        return;
    }
    integer(n+1);
    return;
}
int main(){
    int n = 1;
    integer(n);

}
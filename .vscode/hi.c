#include <stdio.h>
void sum (int );
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    sum(num);
    printf("sum of digits of 321 is %d");
    }
void sum(int n){
    int add=0;
    while(n>0){
        int dig=n%10;
        n=n/10;
        add+=dig;
    }
    return ;
}
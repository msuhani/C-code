#include <stdio.h>
int main(){
    int num=6 ,i ,sum=0, temp=0;
    for(i=1;i<=num;i++){
        if(num%i==0)
            sum=sum+i;
            }
     if(sum==num*2)
        printf("it is a complte number");
    else
        printf("it is not");

}
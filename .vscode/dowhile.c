#include <stdio.h>
int main (){
    int num=5,fact,i=0;
    fact=1;
    while(i<=num){
    fact=fact*++i;
    }
    printf("factorial is %d",fact);
}



    
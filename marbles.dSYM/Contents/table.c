#include <stdio.h>
int main(){
    int i, terms, sum=0;
    printf("enter the number of terms: ");
    scanf("%d",&terms);
    for(i=1;i<=10;i++){
        printf(" %d" ,2*i-1);
        sum+=2*i-1;
       
    }
     printf("sum is %d", sum);
}
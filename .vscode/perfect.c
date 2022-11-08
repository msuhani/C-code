#include <stdio.h>
int main(){
    int num, div=0, sum=0, fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        fact=num%i;
        if(fact==0)
            sum=sum+i;
        }
    if(sum==num)
        printf("IT IS A PERFECT NO");
    else 
       printf("NOT A PERF NO");
return 0;
}
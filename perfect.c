#include <stdio.h>
#include <math.h>
int main(){
    int num, sum=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num < 1)
        return printf("IT IS NOT A PERF NO");
    for(int i=2;i<=sqrt(num);i++){
        if (num%i == 0)
            sum=sum+i+num/i;
        }
    if(sum==num)
        return printf("IT IS A PERFECT NO");
    else 
       return printf("IT IS NOT A PERF NO");
}
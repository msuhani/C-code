#include <stdio.h>
#include <math.h>
int main(){
    int num=45, sum=0;
    printf("Enter a no between 1 and 500 : ");
    scanf("%d",&num);
    int origin_num=num;
    while(num>0){
        int rem=num%10;
        sum+=pow(rem, 3);
        num/=10;
    }
    if(origin_num==sum)
        printf("%d IS AN ARMSTRONG NO",origin_num);
    else
        printf("%d IS NOT AN ARMSTRONG NO",origin_num);
}
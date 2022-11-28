#include <stdio.h>
#include <math.h>
int main(){
    int  n, num=1, den=1;
    float  sum=0, term;
    printf("enter the number of terms");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
       num=pow(-1,i+1);
       den=i;
       term=num/(float)den;
       sum+=term;
       printf("%d/%d ",num,den);
       
    }
    printf("the sum is %f",sum);
    
}
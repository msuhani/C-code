#include <stdio.h>
#include<math.h>
int main (){
    int num,flag=0 ;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num < 2)
        return printf("nIt is not a prime number");
    int n=sqrt(num);
    for(int i=2;i<=n;i++){
       if(num%i==0){
        flag=1;
        break;
       }
    }
    if(flag==0)
        return printf("it is a prime number");
    else
        return printf("it is not a prime number");
}
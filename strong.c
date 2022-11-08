#include <stdio.h>
int main(){
    int num=145, sum=0;
    printf("Enter the number : ");
    //scanf("%d" ,&num);
    if (num < 0)
        printf ("number is negative hence not a strong number");
    int  orig_num = num;
    while(num>0){
        int digit = 0;
        digit=num%10;
        int fact=1;
        for(int i=1; i<=digit ;i++)
            fact=fact*i;
        sum=sum + fact;
        num=num/10;
    }
   
    if(sum==orig_num)
        printf("IT IS A STRONG NUMBER");
    else
        printf("IT IS NOT A STRONG NUMBER");
    return 0;
}
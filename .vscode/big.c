#include <stdio.h>
int main(){
    int a,b,c,big;
    printf("enter the numbers : ");
    scanf("%d %d %d",&a,&b, &c);
    big=(a>b)?((a>c)?a:c):(b>c)?b:c;
    printf("%d",big);
}
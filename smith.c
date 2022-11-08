#include <stdio.h>
int main(){
    int x, x1, factor = 2, sumOfNum =0, sumOffac =0;
    printf("enter a number x = ");
    scanf("%d", &x);
    x1=x;
    while (x!=0){
        sumOfNum = sumOfNum + x%10;
        x = x/10;
    }
    printf("sum of digits = %d\n", sumOfNum);
    x = x1;
    while (x!=1){
        if (!(x%factor)) {
            int temp_fact = factor;
            while (factor!=0){
                sumOffac += factor%10;
                factor = factor/10;
            }
            factor = temp_fact;
            x /= factor;
        }
        else {
            factor++;
        }
    }
    printf("sum of factor digits = %d\n", sumOffac);
    if (sumOfNum == sumOffac)
        printf("%d is a SMITH number\n", x1);
    else
        printf("%d is a not a SMITH number\n", x1);
}
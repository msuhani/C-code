#include <stdio.h>
#include <math.h>
int main(){
    int num = 6, pascal_num=1, last_pascal_num = 1;
    int second_last_digit, new_pascal_digit, new_pascal_num, coef = 1;
    printf("Enter a number of rows: ");
    //scanf("%d",&num);
    if (num < 1)
        return printf("Not a valid input. Please enter greater than 0 next time");
    for(int i=1;i<=num;i++){
        coef = 1;
        printf("\n");
        for (int j=0;j<num-i;j++)
            printf("   ");
        //print one row at a time inside while loop. print last calculated pascal_num and compute new_pascal_num
        while (pascal_num){
            int last_digit = pascal_num%10;
            if (coef == 1)
                new_pascal_num = last_digit;
            printf("%4d  ", last_digit);
            pascal_num/=10;
            if (i != num){
                second_last_digit = pascal_num%10;
                new_pascal_digit = last_digit + second_last_digit;
                new_pascal_num = new_pascal_digit*pow(10, coef) + new_pascal_num;
                coef++;
            }
        }
        pascal_num = new_pascal_num;
    }
}
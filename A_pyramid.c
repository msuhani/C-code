#include <stdio.h>
#include <math.h>
int main(){
    int num = 6;
    printf("Enter a number of rows: ");
    scanf("%d",&num);
    if (num < 1 || num>26)
        return printf("Not a valid input. Please enter greater than 0 next time");
    for(int i=1;i<=num;i++){
        printf("\n");
        for (int j=0;j<num-i;j++)
            printf("   ");
        int num_chars = 2*i-1;
        for (int k=65;k<65+i;k++)
            printf("%c  ", (char)k);
        for (int k=65+i-1;k>65;k--)
            printf("%c  ", (char)k-1);
    }
}
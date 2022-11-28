#include <stdio.h>
int main(){
    int num ,pos;
    printf("how many numbers you want :");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("enter a no: ");
        scanf("%d",&arr[i]);
    }
    printf("enter the position : ");
    scanf("%d",&pos);
    printf("the number at position %d is %d", pos, arr[pos-1]);
}
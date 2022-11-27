#include <stdio.h>
int main(){
    int num;
    printf("enter how many numbers :");
    scanf("%d", &num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }
    int temp;
    printf("the sorted array is \n");
    for(int i=0;i<num-1;i++){
        for(int k=num-1;k>i;k--){
            if(arr[num-k-1]>arr[num-k]){
                temp=arr[num-k];
                arr[num-k]=arr[num-k-1];
                arr[num-k-1]=temp;
            }
        }
    }
    for(int j=0;j<num;j++)
        printf(" %d", arr[j]);
    
}

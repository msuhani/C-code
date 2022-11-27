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
    for(int i=0;i<num;i++){
        for(int k=0;k<num-i-1;k++){
            if(arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for(int j=0;j<num;j++)
        printf(" %d", arr[j]);
    
}

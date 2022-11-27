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
        for(int k=i+1;k<num;k++){
            if(arr[k]<arr[i]){
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
        printf(" %d ", arr[i]);
    }
    
}

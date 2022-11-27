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
    for(int i=0;i<num;i++){
        printf("\nthe sorted array is \n");
        for(int j=i;j>=0;j--){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
                break;
        }
        for(int k=0;k<num;k++)
            printf(" %d", arr[k]);
    }
    for(int k=0;k<num;k++)
        printf(" %d", arr[k]);
    
}

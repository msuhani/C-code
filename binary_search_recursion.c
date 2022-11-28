#include <stdio.h>
int binary_search(int* arr, int left, int right, int num_to_find){
    if (left>=right)
        return -1;
    int mid = (left+right)/2;
    if (num_to_find==arr[mid])
        return mid;
    else if (num_to_find>arr[mid])
        binary_search(arr, mid, right, num_to_find);
    else
        binary_search(arr, left, mid, num_to_find);;
}
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
        for(int j=i;j>=0;j--){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
                break;
        }
    }
    for(int k=0;k<num;k++)
        printf(" %d", arr[k]);

    int num_to_find;
    printf("enter the number to search : ");
    scanf("%d", &num_to_find);
    int left=0, right=num;
    int mid;
    int found = -1;
    found = binary_search(arr, left, right, num_to_find);
    if (found != -1)
        printf("\nelement %d is found at index %d in the sorted array", num_to_find, found);
    else
        printf("\nelement %d not found", num_to_find);
}

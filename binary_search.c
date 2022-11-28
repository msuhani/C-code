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
    int mid;//=(left+right)/2;
    int found = -1;
    // if (num_to_find == arr[left])
    //     found = left;
    // else if (num_to_find == arr[right])
    //     found = right;
    // else {
        while(left<right){
            mid = (left+right)/2;
            if(num_to_find==arr[mid]){
                found = mid;
                break;
            }
            else if(num_to_find>arr[mid])
                left=mid+1;
            else
                right=mid-1;
        }
    
//    }
    if (found != -1){    
        int temp1=mid;
        int count=1;
        while(arr[--temp1]==num_to_find)
            count++;
        while(arr[++mid]==num_to_find)
            count++;
        printf("the number of times %d is repeated in the array is %d", num_to_find, count);
    }
    else
        printf("\nelement %d not found", num_to_find);
   
}

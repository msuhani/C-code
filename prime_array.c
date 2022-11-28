#include <stdio.h>
int main(){
    int arr[100];
    for(int i=0;i<=100;i++){
        arr[i]=i+1;
    }
    for(int i=1;i<50;i++){
        if (arr[i]){
            int multiple = 1, multipler = 2;
            while (multiple <= 100){
                multiple = arr[i]* multipler++;
                if (multiple<=100)
                    arr[multiple-1] = 0;
            }
        }
    }
    printf("the prime number between 1-100 are: ");
    for(int k=0;k<100;k++){
        if (arr[k]){
            printf("%d " ,arr[k]);
        }
    }
}
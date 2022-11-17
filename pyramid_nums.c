#include <stdio.h>
int main(){
    int n=4 ,x=1,j;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
                printf(" ");}
        for(int k=i;k<=x;k++){
            if(k%2==0)
                printf(" ");
            else
                printf("%d",j);
        }
            printf("\n");
    }
}
#include <stdio.h>
int main(){
    int n=4,i,j,k,num=1,count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
            for(k=1;k<=num;k++){
                if(k%2==0)
                    printf(" ");
                else
                    printf("%d",count++);
                
            }
            num+=2;
            printf("\n");
    }
}
#include <stdio.h>
int main(){
    int n=5 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            printf(" ");
        if(i>1 && i<n){
            for(int j=1;j<=i;j++){
                if(j==1 || j==i)
                    printf("* ");
                else printf("  ");
            }
        }
        else for(int j=1;j<=i;j++)
            printf("* ");        
        printf("\n");
    }    
}
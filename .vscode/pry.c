#include <stdio.h>
int main(){
    int i ,j ,rows=5 ,k;
    for(i=1;i<=rows;i++){
        for(j=5;j>=i;j--){
            printf("%d" ,j);
        }
            printf("\n");
    }
}
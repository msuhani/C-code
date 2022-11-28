#include <stdio.h>
int main(){
    int terms, first=0, sec=1, temp, next;
    printf("enter the number of terms \n ");
    scanf("%d",&terms);
    printf("\n %d %d ",first ,sec);
        for(int i=2;i<terms;++i){
        next=first+sec;
        printf("%d ",next);
        first=sec;
        sec=next;
   }
   return 0;
}
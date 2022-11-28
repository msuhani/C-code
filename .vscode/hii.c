#include <stdio.h>
int main(){
    int i=1;
    int a=i++ + i++ + --i;
   
    printf("%d",a);
}
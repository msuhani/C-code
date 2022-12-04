#include <stdio.h>
void num (int x,int y){
    if(x<=y){
        printf(" %d ", x);
        num( ++x, y);
    }
}
int main(){
    num(1,50);
}
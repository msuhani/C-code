#include <stdio.h>
void add(int* x);
int main(){
    int* x;
    int y = 5;
    x = &y;
    add(x);
    printf("x = %d", *x);
}
void add(int* x){
    *x = *x +1;
}
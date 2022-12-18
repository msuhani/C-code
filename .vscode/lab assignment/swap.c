/*Swap variables using pointes and functions.*/
#include <stdio.h>
void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a=10, b=20;
    int* ptr_a = &a;
    int* ptr_b=&b;
    swap(ptr_a, ptr_b);
    printf("a = %d b = %d\n", *ptr_a, *ptr_b);
    return 0;
}
/*Verify the addresses of adjacent elements stored in an array of char, int, float. */
#include <stdio.h>
int main() {
    int a[3]={10, 20, 30};
    char b[3]={'a', 'b', 'c'};
    float c[3]={10.5, 11.3, 12.1};
    printf("address of elements in int array = %p %p %p\n", &a[0],&a[1],&a[2]);
    printf("address of elements in char array = %p %p %p\n", &b[0],&b[1],&b[2]);
    printf("address of elements in float array = %p %p %p\n", &c[0],&c[1],&c[2]);
    return 0;
}
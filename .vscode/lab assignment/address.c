/*WAP to print the address/values of the different variables (int,float,char) using & and
* operators.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=10;
    float b = 20.05;
    char c = 'a';
    int * ptr_a;
    ptr_a = &a;
    float * ptr_b;
    ptr_b = &b;
    char * ptr_c;
    ptr_c = &c;
    printf("address of a = %p b = %p c =%p\n", &a, &b, &c);
    printf("value of a = %d b = %f c =%c\n", a, b, c);

    printf("address of pointers a = %p b = %p c =%p\n", ptr_a, ptr_a, ptr_a);
    printf("value of pointers a = %d b = %f c =%c\n", *ptr_a, *ptr_b, *ptr_c);

    return 0;
}
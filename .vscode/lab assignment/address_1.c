/*WAP to find out the difference between %u, %p, %x while printing the address of a
variable.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=10;
    int * ptr_a;
    ptr_a = &a;
    printf("u value  = %u p value = %p x value  = %x\n", a, a, a);
    return 0;
}
/*Check the size of various pointer variables for int, char, float etc. */
#include <stdio.h>
int main() {
    int a=10;
    int * ptr_a;
    ptr_a = &a;

    char b='a';
    char * ptr_b;
    ptr_b = &b;


    float c=10.5;
    float * ptr_c;
    ptr_c = &c;

    printf("\nsize of int: %d",sizeof(a));
    printf("\nsize of int pointer value: %d",sizeof(*ptr_a));
    printf("\nsize of int pointer: %d",sizeof(ptr_a));
    printf("\nsize of generic int pointer: %d",sizeof(int*));


    printf("\nsize of char: %d",sizeof(b));
    printf("\nsize of char pointer value: %d",sizeof(*ptr_b));
    printf("\nsize of char pointer: %d",sizeof(ptr_b));
    printf("\nsize of generic char pointer: %d",sizeof(char*));

    printf("\nsize of float: %d",sizeof(c));
    printf("\nsize of float pointer value: %d",sizeof(*ptr_c));
    printf("\nsize of float pointer: %d",sizeof(ptr_c));
    printf("\nsize of generic float pointer: %d",sizeof(float*));

    return 0;
}
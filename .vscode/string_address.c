#include <stdio.h>
int main(){
    char s[ ] = "Get organised! learn C!!" ;
    int start = 5, chars = 5;
    printf ( "\n%s", &s[2] ) ;
    printf ( "\n%s", s ) ;
    printf ( "\n%s", &s ) ;
    printf ( "\n%c", s[2] ) ;
    char *t = &s[start-1];
    t[chars] = '\0';
    printf ( "\n%s\n", t ) ;
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int xstrcmp ( const char *t, const char *s ) {
while ( *s != '\0' ) {
    if (*t != *s){
            return (*s-*t);
        }
        s++ ; t++ ;
        }
    if (*t != '\0')
        return (0-*t); 
    return 0;
}


int main() {
    char string1[ ] = "Jerry" ; 
    char string2[ ] = "Ferry" ; 
    int i,j,k;
    i = xstrcmp ( string1, "Jerry" ) ;
    j = xstrcmp ( string1, string2 ) ;
    k = xstrcmp ( string1, "Jerry boy" ) ;
    printf ( "\n%d %d %d", i, j, k ) ;
    return 0;
}
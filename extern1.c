#include <stdio.h>
int i ;
increment() {i++; printf ( "i = %d\n", i );}
extern decrement( ){i--; printf ( "i = %d\n", i ) ;}
int main(){
    printf("\n i = %d", i) ;
    increment( ) ; increment( ) ;
    decrement( ) ; decrement( ) ;
}
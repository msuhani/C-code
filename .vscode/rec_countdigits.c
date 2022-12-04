#include <stdio.h>
int countdigits(int x){
    if(x%10){
        int digits = 1 + countdigits(x/10);
        return digits;
    }
    else
        return 0;
}

int main(){
    printf("count of digits is %d", countdigits(1234));
}
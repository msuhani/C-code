#include <stdio.h>
int main(){
    int x, y, z, n, minCounter, minValue;
    x=2; y=3; z=7; n=4;
    while (n>0){
        minCounter= 0; minValue = x;
        if (y<=x)
            { minCounter=1; minValue = y;}
        if (z<=minValue)
            {minCounter=2; minValue = z;}
        if (minCounter==0)
            x++;
        else if (minCounter==1)
            y++;
        else
            z++;
        n--;
    }
    printf("final marbles are x = %d  y = %d  z = %d", x, y, z);
}
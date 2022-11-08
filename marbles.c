#include <stdio.h>
int main(){
    int x, y, z, n, toAdd;
    x=2; y=3; z=7; n=4;
    printf("enter a number x = ");
    scanf("%d", &x);
    if (n>0) {
        if (n<=(y-x))
            x=x+n;
        else {
            n = n-(y-x);
            x=y;
            if (n< 2*(z-y)) {
                // add remaining equally in x and y
                toAdd = n/2;
                x = x + toAdd;
                y = y + (n-toAdd);
            }
            else {
                toAdd = n - 2 * (z-y);
                x = y = z;
                int toAddEqually = toAdd/3;
                x = y = z = x + toAddEqually;
                toAdd = toAdd - 3 * toAddEqually;
                if (toAdd > 1){
                    y++;
                    z++;
                }
                else if (toAdd)
                    z++;
            }      
        }
    }
    printf("final marbles are x = %d  y = %d  z = %d", x, y, z);
}
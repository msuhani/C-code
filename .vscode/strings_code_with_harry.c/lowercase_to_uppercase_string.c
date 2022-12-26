#include <stdio.h>

int main() {
    char str[50];
    int i=0;
    printf("enter the lowercase string \n");
    gets(str);
    for(i=0;str[i]!=0;i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("the uppercase string is %s", str);
}

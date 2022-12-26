#include <stdio.h>
#include <string.h>
int main(){
    char input[100], output[100];
    int c,d=0;
    printf("enter the string \n");
    gets(input);
    for(c=0;input[c]!='\0';c++){
        if(!(input[c]==" the "||input[c]=="the "||input[c]==" the")){
            output[d]=input[c];
            d++;
        }
    }
        output[d]='\0';
        printf("the new string withput vowels is %s", output);
    }
    
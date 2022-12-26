#include <stdio.h>
int main(){
    char input[100];
    //char output[100];
    printf("enter the string \n");
    gets(input);
    int c=0, d=0;
    while(input[c]!='\0'){
        if(!(input[c]==' ' && input[c+1]==' ')){
            input[d]=input[c];
            d++;
        }
        c++;
    }
    input[d]='\0';
    printf("the value after blank removal is \n%s\n", input);

}
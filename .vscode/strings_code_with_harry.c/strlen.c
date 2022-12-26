#include <stdio.h>
int main(){
    char str[100];
    printf("enter the string \n");
    scanf("%s", str);  
    int i=0;
    while(*str!='\0'){
       str++ ;
       i++;
   }
   printf("the lenght of string is %d", i);
}
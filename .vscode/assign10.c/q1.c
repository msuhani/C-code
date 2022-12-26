#include <stdio.h>
#include <string.h>
int main(){
   /*char *str="suhani";
    int l=strlen(str);
    printf("the lenght of string is %d", l);
    */ 
   char *ptr="suhani ";
   char str[50];
   strcpy(str,ptr);
   printf("str now has %s", str);


    

}
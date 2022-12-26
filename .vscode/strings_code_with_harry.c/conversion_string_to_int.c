#include <stdio.h>
int main(){
   char str[100];
   printf("enter the string of numbers ");
   gets(str);
   int num=0, new=0;
   for(int i=0; str[i]!='\0'; i++){
      num=str[i]-48;
       new=num*10+num;
   } 
   printf("the integer is %d", new);
}
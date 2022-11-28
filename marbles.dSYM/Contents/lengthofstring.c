#include <stdio.h>
int main(){
int i,l=0;
char str[150];
printf("enter the char : ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++){
    l++;
}
printf("the length of string is %d",l);
}

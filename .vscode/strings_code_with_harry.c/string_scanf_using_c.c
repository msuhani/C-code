#include <stdio.h>
#include <string.h>
int main(){
    char str1[50];
    char str2[50];
    printf("enter the first string ");
    scanf("%s", str1);
    printf("enter the second string char by char \n");
    int c, i=0;
    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        str2[i]=c;
        i++;
    }
    str2[i]='\0';
    printf("the value of first string is %s \n", str1);
    printf("the value of second string is %s \n", str2);
    printf("the cmp value is %d", strcmp(str1,str2));

}
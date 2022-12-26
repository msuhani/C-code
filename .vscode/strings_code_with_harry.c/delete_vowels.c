#include <stdio.h>
#include <string.h>
int check_vowel(char);
int main(){
    char s[100], t[100];
    int c,d=0;
    printf("enter the string \n");
    gets(s);
    for(c=0;s[c]!='\0';c++){
        if(!(s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='i'||s[c]=='I'||
            s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U')){
            t[d]=s[c];
            d++;
        }
    }
        t[d]='\0';
        printf("the new string withput vowels is %s", t);
    }
    
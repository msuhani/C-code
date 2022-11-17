#include <stdio.h>
#include <string.h>
int strlen1 (char* input){
    int i=0;
    while (input[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
    char text[100] = "padap";
    printf("enter the text x = ");
    //gets(text);
    int text_len = strlen1(text);

    //abba - 4/2=2....aba: 3/2= 1 0
    //text_len = i;
    int index = 0;
    while (index<text_len/2){
        if (text[index] != text[text_len-index-1]){
            printf("Text: %s is not a palindrome", text);
            return 0;
        }
        index++;
    }
        printf("Text: %s is a palindrome", text);
    return 0;
}
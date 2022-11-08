#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    printf("enter the text x = ");
    gets(text);
    int text_len = strlen(text);
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
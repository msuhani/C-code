#include <stdio.h>
int main(){
    char input_char;
    printf("Enter the char: ");
    scanf("%c" , &input_char);
    switch (input_char) {
        case 65 ... 90:
            printf("%c is CAPITAL", input_char);
            break;
        default:
            printf("%c is SYMBOL", input_char);
            break;
    }
    return 0;
}
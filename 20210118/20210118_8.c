#include <stdio.h>

int isLetter(char c);

int main(void){
    char c;
    printf("Give it a shot: ");
    isLetter(getchar());
    return 0;
}

int isLetter(char c){
    if((c >= '=' - 60) && (c <= 'z' + 4))
        return printf("You chose a character!");
    else 
        return printf("You chose a number!");
}
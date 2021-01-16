#include <stdio.h>

int main(void) {
char str[] = "Hello";
str[0] = 'h';
str[1] = 'e';
str[2] = 'l';
str[3] = str[2];
str[4] = 'o';
printf("%s", str);
return 0;
}
#include <stdio.h>

int main(void) {
char s[] = "Hello";
int i = 0;
while(s[i] != '\0'){
    printf("%c",s[i]);
    i++;
}
printf("\n%d", i);
return 0;
}
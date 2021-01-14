#include <stdio.h>

void bin(int iNum);

int main(void){
    char a = 10;
    bin(a);
    char b = -127;  
    bin(b); 
    char res = a + b;
    printf("%d\n", res);
    return 0;
}

void bin(int iNum){
    unsigned i;
    for(i =1 << 7; i > 0;i = i >> 1)
    (iNum & i) ? printf("1") : printf("0");
    printf("\n");
}
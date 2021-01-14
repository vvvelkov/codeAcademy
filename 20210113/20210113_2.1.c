#include <stdio.h>

void bin(int iNum);

int main(void){
unsigned char i;   
int a = 10;
bin(a);
unsigned char x = 255;
bin(x);
i = x + a;
printf("%d\n",i);
bin(i);
    return 0;
}

void bin(int iNum){
    unsigned i;
    for(i =1 << 7; i > 0;i = i >> 1)
    (iNum & i) ? printf("1") : printf("0");
    printf("\n");
}
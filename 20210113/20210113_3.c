#include <stdio.h>

void bin(int iNum);

int main(void){
    char a = -10;
    bin(a);
    unsigned char z = 0;  
    bin(z); 
    char res = a + z;
    printf("%d\n", res);
    unsigned char res1 = a + z;
    bin(res1);
    printf("%d\n",res1);
    return 0;
}

void bin(int iNum){
    unsigned i;
    for(i =1 << 7; i > 0;i = i >> 1)
    (iNum & i) ? printf("1") : printf("0");
    printf("\n");
}
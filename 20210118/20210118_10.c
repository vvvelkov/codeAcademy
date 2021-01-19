#include <stdio.h>

int main(void){
    int nResult = 7;
    int nX = 3;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result == 1 <<= %d -> %d\n", nX, nResult);
    return 0;
}
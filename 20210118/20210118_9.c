#include <stdio.h>

int main(void){
    float iX = 13;
    float iY = 44;
    float iResult = 0;
    iResult = iX - iY;
    printf("%f - %f = %f \n", iX, iY, iResult);
    iResult = iY / iX;    
    printf("%f / %f = %f \n", iY, iX, iResult);
    iResult = iY * iX;
    printf("%f * %f = %f \n", iY, iX, iResult);
    iResult = iY + iX;
    printf("%f + %f = %f \n", iY, iX, iResult);
    int iX1 = 13;
    int iY1 = 44;
    int iResult1 = iY1 % iX1;
    printf("%d / %d --> Remainder = %d \n", iY1, iX1, iResult1);
    return 0;
}
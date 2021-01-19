#include <stdio.h>

int main(void){
   int iTemp = 1,iTemp1 = 1,iNum = 15;//0000 1111
   iTemp = iTemp << 2; //   0000 0100
   iTemp1 = iTemp1 << 3; // 0000 1000
   iTemp = iTemp + iTemp1;// 0000 1100
   iTemp = ~iTemp; //      1111 0011
   iNum = iNum & iTemp; // 0000 1111 = 0000 0011
   printf("%d", iNum);

    return 0;

    }

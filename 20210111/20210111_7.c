#include <stdio.h>

int main(){
   int iTemp = 1,iTemp1 = 1,iNum = 7;//0000 0111
   iTemp = iTemp << 0; //   0000 0001
   iTemp1 = iTemp1 << 2; // 0000 0100
   iTemp = iTemp + iTemp1;// 0000 0101
   iTemp = ~iTemp; //      1111 1010
   iNum = iNum & iTemp; // 0000 0111 = 0000 0010
   printf("%d", iNum);

    return 0;

    }
#include <stdio.h>

int main(){
   int iTemp = 1,iTemp1 = 1,iTemp2 = 1,iNum = 7;
   // 0000 0111 --> 0100 1111  
   iTemp = iTemp << 1;   //  0000 0010
   iTemp1 = iTemp1 << 3; //  0000 1000
   iTemp2 = iTemp2 << 6; //  0100 0000
   iTemp = iTemp + iTemp1 + iTemp2; // 0100 1010
   iNum = iNum | iTemp; // 0000 0111 ^ 0100 1010 = 0100 1111
   printf("%d", iNum);

    return 0;

    }
#include <stdio.h>

int main(){
   int iTemp = 1,iTemp1 = 1,iTemp2 = 1, iTemp3 = 1,iTemp4 = 1,iNum = 255;
   iTemp = iTemp << 3;   //  0000 1000
   iTemp1 = iTemp1 << 4; //  0001 0000
   iTemp2 = iTemp2 << 5; //  0010 0000
   iTemp3 = iTemp3 << 6; //  0100 0000
   iTemp4 = iTemp4 << 7; //  1000 0000
   iTemp = iTemp + iTemp1 + iTemp2 + iTemp3 + iTemp4;
   iNum = iNum ^ iTemp; // 1111 1111 ^ 1111 1000 = 0000 0111
   printf("%d", iNum);

    return 0;

    }
#include <stdio.h>

int main(void){
   int iTemp = 1, iPos = 2, iNum = 7;
   iTemp = iTemp << iPos;
   iNum = iNum ^ iTemp;
   printf("%d", iNum);

    return 0;
    }

#include <stdio.h>

int obarniBitNa(int iNum,int iPos);

int main(){
   int iNum = 15;// a = 0000 1111
   printf("%d", obarniBitNa(iNum,3));

    return 0;

    }

    int obarniBitNa(int iNum,int iPos){
        int iTemp = 1;
        iTemp = iTemp << iPos;// 0000 1000
        iNum =  iNum ^ iTemp;//  0000 1111 

        return iNum;
    }

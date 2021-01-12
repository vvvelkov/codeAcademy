#include <stdio.h>

int vzemiBitNa(int iNum,int iPos);

int main(){
   int iNum = 5;// a = 0000 0101
   printf("%d", vzemiBitNa(iNum,0));

    return 0;

    }

    int vzemiBitNa(int iNum,int iPos){
        int iTemp = 1;
        iTemp = iTemp << iPos;// 0000 0001
        iTemp = ~iTemp;//       1111 1110
        iNum =  iNum & iTemp;// 0000 0101

        return iNum;
    }

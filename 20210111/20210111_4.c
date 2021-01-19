#include <stdio.h>

int vdigniBitNa(int iNum,int iPos);

int main(void){
   int iNum = 5;// a = 0000 0101
   printf("%d", vdigniBitNa(iNum,1));

    return 0;

    }

    int vdigniBitNa(int iNum,int iPos){
        int iTemp = 1;
        iTemp = iTemp << iPos;// 0000 0001
        iNum =  iNum | iTemp;// 0000 0101 | 0000 0010 = 0000 0111

        return iNum;
    }

#include <stdio.h>

int vzemiBitNa(int iNum,int iPosition);

int main(void){
   int iNum = 3;
   printf("%d",vzemiBitNa(iNum,1));

    return 0;

    }

    int vzemiBitNa(int iNum,int iPosition){
        int iTemp = 1;
        iNum = iNum >> iPosition;
        iNum = iNum & iTemp; 

        return iNum;
    }

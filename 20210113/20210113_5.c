#include <stdio.h>

int main(void){
int iValue = 100; 
printf("\n%d\n",sizeof(iValue)); // 4
float fValue = 23.0;
printf("\n%d\n", sizeof(fValue)); // 4
short int iSValue = 22;
printf("\n%d\n",sizeof(iSValue)); // 2
unsigned long int IValue = 11111111;
printf("\n%d\n", sizeof(IValue)); // 4 

    return 0;
}

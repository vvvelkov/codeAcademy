#include <stdio.h>

int main(void){
   int nX = 1;
   int nY = 1;
   nY = nX + 1; /* 2 // ok */
   nX = 1 + nX + nY; /* 4 // rvalue error */
   nY = 2 * nX++/*5*/ * (nY/*15*/ = nX * 3) + nX++/*6*/ + nY--; 
   // 8 * 15(120) + 5 + 15 = 120 + 20 = 140
   printf("nX = %d, nY = %d\n", nX , nY);
return 0;
}
#include <stdio.h>

int main(void){
   int x = 2, y = 1;
   int true = x && y && x << 2; // 2 && 1 && 8 
    printf("%d\n",true); // 1

   true = x && y ^ x << 1; // 2 && 5
   printf("%d",true); // 1
    return 0;
}
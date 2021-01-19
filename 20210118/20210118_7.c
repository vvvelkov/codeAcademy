#include <stdio.h>

int main(void){
  int nA = 2;
  int nB = (nA == 1 ? 2 : 0); // compare
  printf("A value is %d\n", nA);
  printf("B value is %d\n", nB);
    
    /*a*/
      printf("Give A value: ");
      scanf("%d", &nA);
      nB = (nA == 1 ? 2 : 0); // compare
      printf("A value is %d\n", nA);
      printf("B value is %d\n", nB);

      /*b*/
      printf("a = ");
      scanf("%d", &nA);
      printf("b = ");
      scanf("%d", &nB);
      if(nA != nB)
        nA > nB ? printf("a is bigger") : printf("b is bigger");    
      else 
        printf("these two numbers are equal");
      
    return 0;
}
#include <stdio.h>

int main(void){
    int nA, nB, nX, nY;
    printf("Give nA a Value: ");
    scanf("%d", &nA);
    printf("Give nB a Value: ");
    scanf("%d", &nB);
    printf("Give nX a Value: ");
    scanf("%d", &nX);
    printf("Give nY a Value: ");
    scanf("%d", &nY);

    if(nA > nB && nA != 0)
        printf("&& Operator: Both conditions are true\n");
    else 
        printf("&& Operator: At least one condition is not true\n");

    if(nX > nY || nY != 20)
        printf("|| Operator: At least one condition is true\n");
    
    if(! (nA > nB && nB != 0))
        printf("! Operator: Both conditions are  true\n"); 
    else
        printf("Both conditions are true.\n");
    
    return 0;
}
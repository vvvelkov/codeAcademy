#include <stdio.h>

int main(void){
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);   
    printf("B value is %d\n", nB);

    /*a*/
    printf("Give nA a Value: ");
    scanf("%d", &nA);
    nB = (nA == 5 ? 4 : 2 );
    printf("A value is %d\n",nA);
    printf("B value is %d\n",nB);

    /*b*/
    printf("Give nA a Value: ");
    scanf("%d", &nA);
    printf("Give nB a Value: ");
    scanf("%d", &nB);
    if(nA != nB){
        int res = (nA > nB ? nA : nB);
        printf("%d\n", res);
    }else 
        printf("nA & nB are equal\n");

    return 0;
}
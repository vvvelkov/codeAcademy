#include <stdio.h>

int main(void){
    int nX;
    printf("nX: ");
    scanf("%d", &nX);
    int nY;
    printf("nY: ");
    scanf("%d", &nY);
    if(nX == nY)
        printf("%d and %d are equal\n", nX, nY);
    else{
        printf("%d and %d are not equal\n", nX, nY);
     
        if (nX < nY) 
            printf("%d is smaller than %d\n", nX, nY);
        else 
            printf("%d is smaller than %d\n", nY, nX);   
    }
        return 0;
}
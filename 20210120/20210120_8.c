#include <stdio.h>

int main(void){
    int nValue = 40;
    for(;;){
        if(nValue != 48){
        printf("nValue: %d\n", nValue);
        nValue++;
        } else 
            break;
    }
    return 0;
}
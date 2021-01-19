#include <stdio.h>

int main(void){
    int iCounter = 0;
    while(++iCounter < 3){
        printf("Counter %d\n", iCounter);     // 1 // 2
        printf("++Counter: %d\n", ++iCounter);// 2 // 3
        printf("--Counter: %d\n", --iCounter);// 1 // 2
        printf("Counter++: %d\n", iCounter++);// 1 // 2
        printf("Counter--: %d\n", iCounter--);// 2 // 3
    }
    return 0;
}
/*Kakvo shte stane, ako se prepulni broqchut? - bezkraen cikul*/
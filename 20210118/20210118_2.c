#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x == y + (z < y) != 20;
    printf("%d", true); // 1
    return 0;
}

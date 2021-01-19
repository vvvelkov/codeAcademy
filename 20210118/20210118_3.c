#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int true = ++x + x || y;
    printf("%d", true); // 1
    return 0;
}
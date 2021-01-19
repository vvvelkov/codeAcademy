#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int true;
    int false;
    true = x == y;
    false = x != y;
    printf("True: %d\nFalse: %d", true, false);
    return 0;
}
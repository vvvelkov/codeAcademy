#include <stdio.h>

int main(void){
    int mask = 1;
    unsigned x = 10;
    for(int i = 0; i < x; ++i, mask <<= 1){
        if((x & mask))
        printf("%u\n", (1 << i));
    }
    return 0;
}
#include <stdio.h>

int main(){
    unsigned index = 1;
    unsigned mask = 1 << index;
    unsigned int x = x & mask;
    while(mask < x){
        index++;
        mask = 1 << index;
    }
    return 0;
}
#include <stdio.h>

int main(void){
    int a = 3 ;
    int b = 5 ;

    int andRez = a & b;
    int orRez = a | b;
    int xorRez = a ^ b;
    
    printf("%d\n", andRez);
    printf("%d\n", orRez);
    printf("%d\n", xorRez);

    return 0;
}

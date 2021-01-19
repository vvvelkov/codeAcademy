#include <stdio.h>

int main(void){
    long long int A;
    while(A > 0){
        printf("Choose voltage: ");
        scanf("%d", &A);
        A ^= A << 13;
        A ^= A >> 17;
        A ^= A << 5;
        printf("A = %d\n", A);
    }
    return 0;
}
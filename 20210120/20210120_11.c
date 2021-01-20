#include <stdio.h>

int main(void){
    char chCode;
    chCode = getchar();
    printf("Code '%c' -> ", chCode);

    switch (chCode){
        case 'x':
            printf("No\n"); break; // x = No
        case 'y':
        case 'z':
            printf("Maybe\n"); break; // y & z = Maybe
        case 'a':
            printf("Yes\n"); break;
        default:
            printf("Unknown\n"); break;
    }

    return 0;
}
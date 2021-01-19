#include <stdio.h>

int main(void){
    /***** !(А && B) = !A || !B *****/
    int a;
    int b;
    printf("a: ");
    scanf("%d", &a); // Only 1 or 0
    printf("b: ");
    scanf("%d", &b); // Only 1 or 0
    int res = !(a && b);
    int res1 = !a || !b;
    printf("!(a && b) = %d\n", res);
    printf("!a || !b = %d\n", res1);
    printf("!(a && b ) is equal to !a || !b\n");

    /***** !(a || b) = !a && !b *****/
    printf("a: ");
    scanf("%d", &a); // Only 1 or 0
    printf("b: ");
    scanf("%d", &b); // Only 1 or 0
    res = !(a || b);
    res1 = !a && !b;
    printf("!(a || b) = %d\n", res);
    printf("!a && !b = %d\n", res1);
    printf("!(a || b ) is equal to !a && !b\n");
    
    return 0;
}
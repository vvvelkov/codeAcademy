#include <stdio.h>

extern int g_a;
void test(){
    g_a++;
    printf("%d",g_a);
}

int main(void) {
    test();
    printf("\n");
    test();
    printf("\n");
    test();
    printf("\n");
return 0;
}
int g_a = 1;
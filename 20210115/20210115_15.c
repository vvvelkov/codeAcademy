#include <stdio.h>

void test(){
    static int s_a = 1;
    s_a++;
    printf("%d",s_a);
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
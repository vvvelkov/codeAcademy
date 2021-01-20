#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int m;
    scanf("%d", &m);

    switch(m){
        case 1:
            printf("Hello World\n");
            break;
        case 2:
            printf("Mary had a little lamb,\n");
            printf("Its fleece was white as snow;\n");
            printf("And everywhere that Mary went\n");
            printf("The lamb was sure to go.\n");
            break;
        case 3:
            printf("42\n");
            break;
        default: 
            printf("number not in scope\n");
    }

    return 0;
}
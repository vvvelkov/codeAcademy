#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int m = 0;
    printf("Click number 4 for exit!\n");
    
    while(m != 4){
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
            case 4:
                printf("Well done!");
                break;
            default: 
                printf("number not in scope\n");
        }
        if(m != 4)
        printf("\n Okay though guy, just Click 4 for exit!\n");
    }

    return 0;
}
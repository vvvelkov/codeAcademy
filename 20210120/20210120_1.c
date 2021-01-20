#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int x;
    scanf("%d", &x);
    
    if(x == 1)
    printf("Hello");
    else if (x == 2)
    printf("Poem");
    else 
    printf("hidden message");

    return 0;
}
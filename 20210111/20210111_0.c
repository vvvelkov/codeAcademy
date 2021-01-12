#include <stdio.h>

int addDigit(int a, int b);

int main(){
    int a=3, b=4;
    printf("%d",addDigit(a,b));
    
    return 0;
}

int addDigit(int a, int b){
    return a + b;
}
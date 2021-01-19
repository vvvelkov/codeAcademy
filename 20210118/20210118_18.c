#include <stdio.h>

int main(void){
    char arr[9] = {'.' , '.' , '.' , '.', '.', '.', '.', '.'};
    int iNum = 1; // mask
    int i = 0; // index in arr
    int stepen = 1; 
    while(i < 8){
        if(arr[i] == 1*2*stepen)
           arr[i] = '*';

        stepen *= 2;
        i++;
    }
    printf("%s", arr);
    return 0;
}
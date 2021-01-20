#include <stdio.h>

int main(void){
    int arr[5] = {3, 4, 5, 6, 7};
    int i = 0, x = 0;

    while(i < 5){
        x = x + arr[i];
        i++;
    }
    printf("%d\n",x);
  
    return 0;
}
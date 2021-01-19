#include <stdio.h>

const float C_PI = 3.1415;
float sOfElipse();

int main(void) {
    float A = 5;
    float B = 4;
    printf("%f\n", sOfElipse(A,B));
return 0;
}

float sOfElipse(float A, float B){
 return C_PI * A * B;
}

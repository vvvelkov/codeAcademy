#include <stdio.h>

const float C_PI = 3.14159;
float sOfCircle(float R);

int main(void) {
    float r1 = 1;
    printf("%f\n",sOfCircle(r1));

    float r2 = 1.5;
    printf("%f\n",sOfCircle(r2));
    
    float r3 = 13;
    printf("%f\n",sOfCircle(r3));
    
return 0;
}

float sOfCircle(float R){
 return C_PI * R * R;
}

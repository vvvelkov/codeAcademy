#include <stdio.h>

const double C_PI = 3.1415;
double sOfCircle();

int main(void) {
    double r1 = 1;
    printf("%f\n",sOfCircle(r1));
    double r2 = 1.5;
    printf("%f\n",sOfCircle(r2));
    double r3 = 13;
    printf("%f\n",sOfCircle(r3));
return 0;
}

double sOfCircle(double R){
 return C_PI * R * R;
}
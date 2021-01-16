#include <stdio.h>

const double C_PI = 3.1415;
double sOfElipse();

int main(void) {
    double A = 5;
    double B = 4;
    printf("%f\n", sOfElipse(A,B));
return 0;
}

double sOfElipse(double A, double B){
 return C_PI * A * B;
}
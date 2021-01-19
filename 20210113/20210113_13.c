#include <stdio.h>

int main(void){
  char a = 'a';
  printf("%c", a);
  printf("--> 1 byte\n");
  int b = 102;
  printf("%d", b);
  printf("--> 4 bytes\n");
  long c = 50000;
  printf("%ld", c);
  printf("--> 4 bytes\n");
  float d = 6.0;
  printf("%f",d);
  printf("--> 4 bytes\n");
  double e = -48.907;
  printf("%lf", e);
  printf("--> 8 bytes\n");
    return 0;
}

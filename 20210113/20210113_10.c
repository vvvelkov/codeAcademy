#include <stdio.h>

int main(void){
  char caravans = 3;
  unsigned char carValue = 90; // lv
  char campers = 3;
  unsigned char camValue = 100; // lv
  printf("Dobre doshli v Karavani i Kemperi pod naem\n");
  printf("Ako zalaete karavana natisnete 1\n");
  printf("Ako zalaete kemper natisnete 2\n");
  int res;
  scanf("%d",&res);
  printf("You chose %d", res);

    return 0;
}

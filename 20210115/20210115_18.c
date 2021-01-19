#include <stdio.h>

int main(void){
  char caravans = 3;
  char carValue = 90; // lv
  char campers = 3;
  char camValue = 100; // lv
  
  printf("Dobre doshli v Karavani i Kemperi pod naem\n");
  printf("Ako zalaete karavana natisnete 1\n");
  printf("Ako zalaete kemper natisnete 2\n");
  int res, bill = 0;
  
  printf("Dobre doshli v Karavani Kemperi pod naem\n");

  printf("Kolko karavani jelaete? \n");
  scanf("%d", &res);
  bill += res * carValue;

  printf("Kolko kempera jelaete? \n");
  scanf("%d", &res);
  bill += res * camValue;

  printf("Vashata smetka e %d\n", bill);
  printf("Jelaete li oshte produkti?\n");
  
    return 0;
}

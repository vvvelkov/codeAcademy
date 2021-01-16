#include <stdio.h>

int main(){
  int caravans = 3;
  float carValue = 90; // lv
  int campers = 3;
  float camValue = 100; // lv
  printf("Dobre doshli v Karavani i Kemperi pod naem\n");
  printf("Ako zalaete karavana natisnete 1\n");
  printf("Ako zalaete kemper natisnete 2\n");
  int res;
  scanf("%d",&res); // choose 1
  float moneyCar = carValue / caravans;
  printf("Duljite ni %f lv\n",moneyCar);
  printf("Jelaete li oshte nalichni produkti?\n"); 
  scanf("%d",&res); // 1 for Yes 0 for No
    return 0;
}

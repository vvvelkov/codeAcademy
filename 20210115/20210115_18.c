#include <stdio.h>

int main(){
  float caravans = 3;
  float carValue = 90; // lv
  float campers = 3;
  float camValue = 100; // lv
  printf("Dobre doshli v Karavani i Kemperi pod naem\n");
  printf("Ako zalaete karavana natisnete 1\n");
  printf("Ako zalaete kemper natisnete 2\n");
  int res;
  scanf("%d",&res); // choose 1
  float moneyCar = carValue / caravans;
  printf("Duljite ni %d lv\n",moneyCar);
  printf("Jelaete li oshte nalichni produkti?"); 
    return 0;
}

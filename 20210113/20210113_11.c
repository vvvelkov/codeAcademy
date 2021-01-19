#include <stdio.h>

int main(void){
  double fTomatoPrice = 4.5; // za kg
  printf("Hello, welcome to our shop!"); 
  printf("Today we offer - fresh tomatoes flour,");
  printf("yoghurt , ice cream and lollipops.\n");
  printf("How much killos of tomatoes do you want?\n");
  double fTomatoWeight;
  scanf("%f",&fTomatoWeight);
  double fTomatoTotal = fTomatoWeight*fTomatoPrice;
    return 0;
}

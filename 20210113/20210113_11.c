#include <stdio.h>

int main(void){
  float tomatoPrice = 4.5;
  float flourPrice = 1.80;
  float yogourtPrice = 0.50;
  float icecreamPrice = 0.60;
  float candyPrice = 1.50;
  float lolipopPrice = 0.15;
  float tomatoWeight, flourWeight, candyWeight;
  short int yogourtNumber, icecreamNumber, lolipopNumber;
 
  printf("Hello, welcome to our shop!"); 
  printf("Today we offer - fresh tomatoes flour,");
  printf("yoghurt , ice cream and lollipops.\n");
  printf("How much killos of tomatoes do you want?\n");
 
  scanf("%f",&tomatoWeight);
  float tomatoTotal = tomatoWeight*tomatoPrice;
  
  printf("You wanted quantity which is equal to %.2f lv\n",tomatoTotal);
  printf("How many lolipops do you want?\n");

  scanf("%d", &lolipopNumber);
  float lolipopTotal = lolipopNumber*lolipopPrice;

  printf("You wanted quantity which is equal to %.2f lv\n", lolipopTotal);

    return 0;
}

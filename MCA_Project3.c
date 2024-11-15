//Q3 -write a c program to input amount :
#include<stdio.h>
int main(){
  int amount;
  printf("enter the amount:");
  scanf("%d",&amount);
  if(amount >= 500){
    printf("rs 500: %d:",amount/500);
    amount %= 500;
  }
  if (amount >= 100){
    printf("\nrs 100: %d",amount/100);
    amount %= 100;
  }
  if (amount >= 50){
    printf("\nrs 50: %d",amount/50);
    amount %= 50;
  }
  if (amount >= 20){
    printf("\nrs 20: %d",amount/20);
    amount %= 20;
  }
  if (amount >= 10){
    printf("\nrs 10: %d",amount/10);
    amount %= 10;
  }
  if (amount >= 5){
    printf("\nrs 5: %d",amount/5);
    amount %= 5;
  }
  if (amount >= 2){
    printf("\nrs 2: %d",amount/2);
    amount %= 2;
  }
  if (amount = 1){
    printf("\nrs 1: %d",amount/1);
//    amount %= 1;
 } 
  else{
    printf("invalid input");
  }
}
//o/p- enter the ammount:833
//rs 500:1
//rs 100:3
//rs 20:1
//rs 10:1
//rs 2:1
//rs 1:1

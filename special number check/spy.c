//sum of the digits is equal to the product of its digits

#include <stdio.h>
int main () {
  int sum =0;
  int prod =1;
  int n =14299;
  while(n>0){
    int digit = n %10;
    sum += digit;
    prod *= digit;
    n/=10;
  }
  if(sum == prod){
    printf("SPY NUMBER");
  }else{
    printf("NOT SPY NUMBER");
  }


    return 0;
}
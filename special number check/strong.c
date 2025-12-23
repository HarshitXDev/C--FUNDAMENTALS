// sum of the factorial of digits is equal to the number itself.
#include <stdio.h>
int main () {
      int n = 145;
      int temp = n;
      
      int sum = 0;
      while (temp>0){
        int digit = temp %10;
        int fact = 1;
        for(int i =1;i<=digit;i++){
            fact *= i;

        }
        sum += fact;
        temp/=10;

      }
     if(sum == n){
        printf("STRONG NUMBER");
     }else{
        printf("NOT STRONG NUMBER");
     }
      return 0;
}
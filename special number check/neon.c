//sum of digits of its square is equal to the number itself

#include <stdio.h>
int main () {
   int num =9;
   int n = num*num;
   int temp = n;
   int sum = 0;
    while(temp>0){
        int digit = temp%10;
        sum += digit;
        temp/=10;
    }
    if(sum == num){
        printf("NEON");
    }else{
        printf("NOT NEON");
    }
    return 0;
}
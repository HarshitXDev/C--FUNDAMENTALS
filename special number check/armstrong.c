#include <stdio.h>
int main () {
    int n =158;
    int sum = 0;
    int temp = n;
    while(n>0){
        int digit= n%10;
        sum = sum + (digit*digit*digit);
        n/=10;
    }
    if(temp==sum) printf("armstrong");
    else printf("not armstrong");
      return 0;
}

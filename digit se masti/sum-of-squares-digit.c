#include <stdio.h>
int main () {
    int n =6488;
    int sum = 0,digit;
    while(n>0){
        digit = n%10;
        sum += (digit * digit);
        n/=10;
    }
    printf("%d ",sum);
    return 0;
}
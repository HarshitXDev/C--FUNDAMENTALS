#include <stdio.h>
int main () {
    int n=74883;
    int prod=1;
    while(n>0){
        int digit = n%10;
        prod = prod * digit;
        n/=10;
    }
    printf("%d ",prod);
}
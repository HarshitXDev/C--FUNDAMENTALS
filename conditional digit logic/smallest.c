#include <stdio.h>
int main () {
    int n = 9867;
int min = 9;
    while(n>0){
        int digit = n%10;
        if(digit < min){
            min = digit;
        }
        n/=10;
    }
    printf("smallest number: %d ",min);
        return 0;
}

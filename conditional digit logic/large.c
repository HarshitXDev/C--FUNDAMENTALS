#include <stdio.h>
int main() {
    int n =4537;
    int max =0;
    while(n>0){
        int digit = n%10;
        if(digit>=max){
            max = digit;
        }
        n/=10;

    }
    printf("largest digit: %d ", max );
    return 0;
}
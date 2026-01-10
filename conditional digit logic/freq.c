#include <stdio.h>
int main () {
    int n = 99050977;
    int count =0;
    int target = 9;
    while(n>0){
        int digit = n%10;
        if(digit == target){
            count++;
        }
        n/=10;

    }
    printf("FREQUENCY of 9: %d ", count);
    return 0;
}
#include <stdio.h>

int main() {
    int num, originalNum, digit;
    int digits = 0;
    int result = 0;
     scanf("%d", &num);
    originalNum = num;
    
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
   
    temp = num;
    while (temp != 0) {
        digit = temp % 10;   

        
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power *= digit;
        }

        result += power;    
        temp /= 10;         

    
    if (result == originalNum)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
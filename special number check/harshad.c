#include <stdio.h>
int main () {
    int n =18;
    int sum = 0;
    int temp = n;
    while (n>0){
        int digit = n%10;
        sum = sum + digit;
        n/=10;
    }
    if(temp%sum==0){
        printf("HARSHAD NUMBER");
    }else{
        printf("NOT A HARSHAD NUMBER");
    }

    return 0;
}

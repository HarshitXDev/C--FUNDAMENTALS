#include <stdio.h>
int main () {
    int n = 7349;
    int rev =0 ;
    while(n>0){
        rev = (rev * 10) + (n % 10);
        n/=10;
    }
    if(n==rev){
    printf("PALINDROME");
    }else{
        printf("NOT PALINDROME");
    }
    return 0;
}
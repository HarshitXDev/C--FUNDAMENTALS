#include <stdio.h>
int main ()  {
    char s[100];
    int alpha = 0;
    int digit = 0;
    int special  = 0;
    scanf("%s", &s);
    for(int i=0; s[i] != '\0';i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        alpha++;
        else if(s[i] >='0' && s[i] <= '9')
        digit++;
        else
        special++;
    }
    printf("alphabets=%d Digits=%d Special=%d", alpha, digit, special);
    return 0;
}
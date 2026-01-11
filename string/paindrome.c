#include <stdio.h>
int main () {
     char s[100];
     int i =0 ;
     int len = 0;
     int flag = 1;
     scanf("%s",s);
     while(s[len] != '\0')
     len++;
     while(i<len/2){
        if(s[i] != s[len - i -1]){
            flag = 0;
            break;
        }
        i++;
     }
    if(flag)
    printf("palindrome");
    else
    printf("not palindrome");

    return 0;
}
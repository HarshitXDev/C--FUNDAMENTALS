#include <stdio.h>
int main () {
    char s[100] , ch;
    int found = 0;
    scanf("%s",&s);
    scanf("%c",&ch);
    for(int i=0;s[i] != '\0';i++){
        if(s[i] == ch){
            found = 1;
            break;
        }
    }
    if(found)
    printf("character found");
    else
    printf("character not found");
    return 0;
}
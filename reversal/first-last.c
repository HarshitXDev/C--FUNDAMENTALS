#include <stdio.h>
int main () {
    int n =3559,last,first;
    last = n%10;
    first = n;
    while(first >= 10){
        first /= 10;
    }
    printf("%d ",first+last);
    return 0;
}
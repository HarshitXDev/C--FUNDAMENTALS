#include <stdio.h>
int main () {
    int x= 100;
    int *p = &x;
    printf("x   = %d\n", x); //100
    printf("&x  = %p\n", &x); //0061FF18
    printf("p   = %p\n", p); //0061FF18
    printf("*p  = %d\n", *p); //100

    return 0;
}
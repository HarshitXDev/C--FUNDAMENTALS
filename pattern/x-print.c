#include <stdio.h>

int main() {
    int n,x;

   scanf("%d ",&n);
   if(n%2!=0)
    x = n;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (j == i || j == (x - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

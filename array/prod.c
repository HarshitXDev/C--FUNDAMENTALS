#include <stdio.h>
int main () {
    int arr[] = { 5,7,3,2,8};
    int prod =1;
    for(int i=0;i<=4;i++){
       prod *= arr[i];
    }
    printf("%d ",prod);

    return 0;
}
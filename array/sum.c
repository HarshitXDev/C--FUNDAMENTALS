#include <stdio.h>
int main () {
    int arr[] = { 5,7,3,2,8};
    int sum =0;
    for(int i=0;i<=4;i++){
        sum += arr[i];
    }
    printf("%d ",sum);

    return 0;
}
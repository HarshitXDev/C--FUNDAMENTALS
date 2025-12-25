#include <stdio.h>
int main () {
    int arr[] = { 5,7,3,2,8};
    int average;
    int sum = 0;
    for(int i=0;i<5;i++){
       sum  += arr[i];
       average = sum / 5;
    }
    printf("%d ",average);

    return 0;
}


#include <stdio.h>
int main (){
int n;          //Array size should be specified in compile time not during run time.
scanf("%d ",&n);        //this only works in mordern compilers 
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}
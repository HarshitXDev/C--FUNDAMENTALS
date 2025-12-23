#include <stdio.h>

float average3(int a,int b,int c){
    return (a+b+c)/3.0;
}

int main () {
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
printf("Average \n",average3(x,y,z));


    return 0;
}
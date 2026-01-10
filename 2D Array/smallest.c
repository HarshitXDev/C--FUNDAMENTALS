#include <stdio.h>
int main() {
    int r ,c;
    scanf(" %d %d", &r,&c);
    int a[r][c];
   
    int sum = 0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
     int temp = a[0][0];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         
           if(temp > a[i][j] ){
            temp = a[i][j];
           }
            
        }
    }
    printf("Smallest:%d ",temp);
    return 0;
}
#include <stdio.h>
int main() {
    int r ,c;
    int target = 9;
    scanf(" %d %d", &r,&c);
    int a[r][c];
   
  

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         if(a[i][j] == target)
         printf("FOUND AT %d %d",i,j);
            break;
        }
    }
   
    return 0;
}
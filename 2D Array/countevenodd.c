#include <stdio.h>
int main() {
    int r ,c;
    int even = 0;
    int odd = 0;
    scanf(" %d %d", &r,&c);
    int a[r][c];
   
  

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         if(a[i][j] % 2 ==0)
         even++;
         else
         odd++;
            
        }
    }
    printf("even:%d ",even);
    printf("odd:%d ",odd);
    return 0;
}
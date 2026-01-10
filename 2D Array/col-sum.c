#include <stdio.h>
int main () {
    int r,c;
    int sum = 0;
      scanf("%d %d",&r ,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    
      int j=0;
      while(j<c){
        sum = 0;
    for(int i=0;i<r;i++){
    sum += a[i][j];
    }
    j++;
    
    printf("column %d Sum:",j);
    printf("%d\n",sum);
}
   return 0;
}
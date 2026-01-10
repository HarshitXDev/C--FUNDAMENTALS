#include <stdio.h>
int main () {
    int r,c;
    int sum = 0;
      scanf("%d %d",&r ,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    
      int i=0;
      while(i<r){
        sum = 0;
    for(int j=0;j<c;j++){
    sum += a[i][j];
    }
    i++;
    
    printf("Row %d Sum:",i);
    printf("%d\n",sum);
}
   return 0;
}
#include <stdio.h>
int main (){
int n =12345;
int odd = 0;
int even = 0;
while(n>0){
    int d = n % 10;
    if(d%2==0){
        even++;
    }else{
        odd++;
    }
    n/=10;
}
printf("even:%d odd:%d",even,odd);
return 0;
 
}

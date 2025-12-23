#include <stdio.h>
int add(int a,int b){ 
    return a+b;
}
int subtract(int a,int b){ 
    return a-b;
}
int multiply(int a,int b){ 
    return a*b;
}
int divide(int a,int b){ 
    return a/b;
}
int main () {
    int a,b,ch;
    scanf("%d %d %d",&a,&b,&ch);
    switch(ch) {
        case 1:
        printf("%d\n", add(a, b));
        break;
        case 2:
        printf ("%d\n",subtract(a,b));
        break;
        case 3:
        printf("%d\n",multiply(a,b));
        break;
        case 4:
        printf("%d\n",divide(a,b));
        break;
        default:
        printf("INVALID CHOICE");
    }
  return 0;

}
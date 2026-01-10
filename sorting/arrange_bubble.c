#include <stdio.h>


void bubble_sort(int arr[],int n){
          
      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[i+1];
                arr[j+1] = temp;
            }
        }
    }
}

        void printArray(int arr[],int n){
            for(int i=0;i<n;i++){
                printf("%d",arr[i]);
            }
            printf("\n");
        }
        int main() {
            int arr[] = { 3,4,2,1};
            int n =sizeof(arr) / sizeof(int);
            printArray(arr,n);
            bubble_sort(arr,n);
            printArray(arr,n);
        }
      

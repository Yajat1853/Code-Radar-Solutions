// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if (arr[i] == arr[i+1]){
            printf("%d",-1);
            break;
        }
        else if(arr[i] > arr[i + 1] && arr[i] > arr[i - 1]){
            printf("%d",arr[i]);
            break;
        } 
    }
    //printf("%d",arr[n-1]);  
}
#include<stdio.h>

int main(){ 
    int n, m; 
    int arr[n];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i = 0; i < m ; i++){
        arr[i] = arr[i + 1];
    }
    for(int i = 0 ; i < n ;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
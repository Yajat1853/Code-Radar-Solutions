#include<stdio.h>

int main(){ 
    int n, m; 
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&m);

    for(int i = 0; i < n ; i++){
        temp[i] = arr[(i + m) % n];
    }
    for(int i = 0 ; i < n ;i++){
        printf("%d\n",temp[i]);
    }
    return 0;
}
#include<stdio.h>

int main(){ 
    int n, m; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&m);

    
    for(int i = 0 ; i < n ;i++){
        printf("%d\n",arr[(i + m) % n]);
    }
    return 0;
}
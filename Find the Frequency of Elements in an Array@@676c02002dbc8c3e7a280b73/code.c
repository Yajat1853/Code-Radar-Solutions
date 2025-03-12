#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n; i++){
        int count_i = 0;
    }
    for(int i ; i < n; i++){
        if (arr[i] == arr[i]){
            count_i ++;
            printf("%d %d\n",arr[i], count_i);
            count = 0;
        }
    }
    return 0;
}
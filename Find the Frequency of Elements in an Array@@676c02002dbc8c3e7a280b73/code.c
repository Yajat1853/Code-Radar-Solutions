#include<stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i ; i < n; i++){
        if (arr[i] == arr[i]){
            count ++;
            printf("%d %d\n",arr[i], count);
        }
    }
    return 0;
}
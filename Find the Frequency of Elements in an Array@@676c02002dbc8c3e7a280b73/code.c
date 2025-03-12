#include<stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n; i++){
        if (arr[i] == arr[i]){
            count += 1;
            printf("%d %d\n",arr[i], count);
        }
        count = 0;
    }
    return 0;
}
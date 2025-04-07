#include<stdio.h>

int main() {
    int n;
    int count = 1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 1; j < n; j++){
            if (arr[i] == arr[j]){
            count += 1;
        }
        }
        printf("%d %d\n",arr[i], count);
        count = 0;
    }
    return 0;
}
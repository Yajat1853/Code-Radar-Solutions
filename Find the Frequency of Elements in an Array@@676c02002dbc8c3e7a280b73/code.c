#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n; i++){
        int already_counted = 0;
        
        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                already_count = 1;
                break;
            }
        }
        if (already_counted){
            continue;
        }
        int count = 0;
        for(int j = 1; j < n; j++){
            if (arr[i] == arr[j]){
            count ++;
        }
        }
        printf("%d %d\n",arr[i], count);
    }
    return 0;
}
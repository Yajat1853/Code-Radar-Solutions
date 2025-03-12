#include<stdio.h>

void max(int ar[], int n){
    int m ;
    m = ar[0];
    for(int i = 0; i < n ; i++){
        if (ar[0]< ar[i]){
            m = ar[i];
        }
    }
    printf("%d",m);
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    max(arr[], n);
}
#include<stdio.h>

void max(int ar[], int n){
    int m ;
    m = arr[0];
    for(int i = 0; i < n ; i++){
        if (arr[0]< arr[i]){
            m = arr[i];
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
    max(int arr[], n);
}
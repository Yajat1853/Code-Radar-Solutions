#include<stdio.h>
int main() {
    int n,p = 1; 
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for( int j = 1; j <= i; j++){
            printf("%d ", p);
        }
        p = 0;
        printf("\n");
    }
}
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c", 65 + i - 1);
        }
    }
    printf("\n");
}
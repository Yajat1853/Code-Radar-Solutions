#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf(" ");
        }

        for(int k = 1; k <= i; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}
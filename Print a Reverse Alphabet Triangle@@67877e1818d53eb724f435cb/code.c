#include<stdio.h>

int main() {
    int n, p = 1; 
    char m = 'A';
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf("%c ", 65+j-1);
        }
        printf("\n");
    }
}
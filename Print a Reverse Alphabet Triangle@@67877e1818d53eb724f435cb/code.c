#include<stdio.h>

int main() {
    int n, p = 1; 
    char m = 'A';
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("%c ", 65+p-1);
        }
        printf("\n");
    }
}
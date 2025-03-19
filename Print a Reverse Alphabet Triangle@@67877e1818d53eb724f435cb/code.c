#include<stdio.h>

int main() {
    int n; 
    char m = 'A';
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        for(int j = i; j >= n; j--){
            printf("%d ", m+1);
        }
    }
}
#include <stdio.h>

void mirrored_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }        
        printf("\n");  
    }
}
int main() {
    int size;
    scanf("%d", &size);
    mirrored_triangle(size);
    return 0;
}

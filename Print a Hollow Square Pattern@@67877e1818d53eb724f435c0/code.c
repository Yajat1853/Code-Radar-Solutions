#include <stdio.h>

void hollow_square(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");  // print space
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    scanf("%d", &size);
    hollow_square(size);
    return 0;
}

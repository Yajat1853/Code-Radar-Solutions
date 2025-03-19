#include <stdio.h>

void print_alternating_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    int n ; 
    scanf("%d",&n);
    print_alternating_triangle(n);
    return 0;
}

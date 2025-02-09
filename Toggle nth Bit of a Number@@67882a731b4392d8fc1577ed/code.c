#include <stdio.h>

void toggleNthBit(int *num, int n) {
    *num = *num ^ (1 << n);
}

int main() {
    int num, n;


    scanf("%d", &num);

    scanf("%d", &n);

    toggleNthBit(&num, n);

    printf("%d", num);

    return 0;
}

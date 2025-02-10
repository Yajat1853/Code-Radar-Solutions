#include <stdio.h>

def toggleNthBit(int *num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num, n;


    scanf("%d", &num);

    scanf("%d", &n);

    result = toggleNthBit(num, n);

    printf("%d", result);

    return 0;
}

#include <stdio.h>

void toggleNthBit(int *num, int n) {
    *num = *num ^ (1 << n);
}

int main() {
    int num, n;

    // Taking input for the number and the bit position to toggle
   
    scanf("%d", &num);


    scanf("%d", &n);

    toggleNthBit(&num, n);

    printf(" %d", num);

    return 0;
}

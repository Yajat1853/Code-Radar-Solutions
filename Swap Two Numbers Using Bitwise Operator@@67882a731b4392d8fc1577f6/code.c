#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    // Swap the numbers using XOR
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    // Output the swapped numbers
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

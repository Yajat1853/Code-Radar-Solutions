#include <stdio.h>

unsigned int removeNthBit(unsigned int num, int n) {
    // Create a mask where the nth bit is 0 and all other bits are 1
    unsigned int mask = ~(1 << n);
    
    // Apply the mask using the AND operator to clear the nth bit
    return num & mask;
}

int main() {
    unsigned int num ; // Example number: 29 (binary: 11101)
    int n ; // Remove the 2nd bit (0-indexed from the right)
    scanf("%u",&num);
    scanf("%u",&n);
    unsigned int result = removeNthBit(num, n);

    printf("%u\n", result);

    return 0;
}

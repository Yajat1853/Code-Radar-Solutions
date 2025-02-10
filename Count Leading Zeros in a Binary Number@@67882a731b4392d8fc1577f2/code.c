#include <stdio.h>

int countLeadingZeroes(int num) {
    int count = 0;
    
    // Check if the number is zero, as zero has 32 leading zeroes
    if (num == 0) return 32;
    
    // Loop through the number's bits from left to right
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            break;  // Stop once the first '1' bit is found
        }
        count++;  // Increment count for each leading zero
    }
    
    return count;
}

int main() {
    int num;
    scanf("%d", &num);  // Enter the number

    int leadingZeroes = countLeadingZeroes(num);
    printf("%d\n", leadingZeroes);

    return 0;
}

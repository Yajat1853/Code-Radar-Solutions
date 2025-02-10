#include <stdio.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return -1;  // If no set bits, return -1.
    int position = 0;
    while (!(num & 1)) {  // Check the rightmost bit
        num >>= 1;  // Shift the number to the right
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);  // Enter the number

    int position = lowestSetBitPosition(num);
    printf("%d\n", position);

    return 0;
}

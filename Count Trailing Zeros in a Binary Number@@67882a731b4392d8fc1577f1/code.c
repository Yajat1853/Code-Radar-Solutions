#include <stdio.h>

int countTrailingZerosInBits(int n) {
    if (n == 0) {
        return 0;
    }

    int count = 0;

    while ((n & 1) == 0) {
        count++;
        n >>= 1;  
    }

    return count;
}

int main() {
    int number;
    scanf("%d", &number);
    int result = countTrailingZerosInBits(number);
    printf("%d\n",result);
    return 0;
}

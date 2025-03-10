#include <stdio.h>

int main() {
    unsigned int num = 0, flipped = 0;

    scanf("%u", &num);
    flipped = ~num;
    printf("%u\n", flipped);

    return 0;
}

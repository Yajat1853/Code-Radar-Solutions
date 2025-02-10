#include <stdio.h>

int nthbit(int num) {
    return num & -num;
}

int main() {
    int num , lowest_bit;
    scanf("%d",&num);
    lowest_bit = nthbit(num);
    printf("%d", lowest_bit);
    return 0;
}
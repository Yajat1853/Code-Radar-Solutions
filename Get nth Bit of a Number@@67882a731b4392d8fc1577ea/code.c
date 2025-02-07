#include <stdio.h>

int main() {
    int num,n,bit_value;
    scanf("%d",&num);
    scanf("%d",&n);
    bit_value = (num >> n) & 1;

    printf("%d",bit_value);
    return 0;
}
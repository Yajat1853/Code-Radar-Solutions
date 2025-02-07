#include <stdio.h>

int main() {
    int a , msb;
    scanf("%d",&a);
    msb = 0x80000000;
    if (a & msb) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}
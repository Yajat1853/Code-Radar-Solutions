#include <stdio.h>

int main() {
    int num , n , toggle;
    scanf("%d",&num);
    scanf("%d",&n);
    toggle = ~(n);
    printf("%d", toggle);
    return 0;
}
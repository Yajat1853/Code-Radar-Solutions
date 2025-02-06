#include <stdio.h>

int main() {
    int a , b , shift ;
    scanf("%d",&a);
    scanf("%d",&b);
    shift = a << b;

    printf("%d" , shift );
    return 0;
}
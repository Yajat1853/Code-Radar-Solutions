#include <stdio.h>

int main() {
    int num , n , clear;
    scanf("%d",&num);
    scanf("%d",&n);
    clear = num << n ;
    printf("%d",clear);
    return 0;
}
#include <stdio.h>

void setNthBit(int *num, int n) {
    *num = *num | (1 << n);
}

int main() {
    int number ;  
    int n ;       
    scanf("%d",&number);
    scanf("%d",&n);
    setNthBit(&number, n);
    printf(" %d\n", number);

    return 0;
}

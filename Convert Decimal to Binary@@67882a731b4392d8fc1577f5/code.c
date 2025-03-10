#include <stdio.h>

void print_bits(int num) {
    if (num == 0) {
        printf("0");}
    int started = 0; 
    
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  
        
       
        if (bit == 1 || started) {
            printf("%d", bit);
            started = 1;
        }
    }
    
    printf("\n");
}

int main() {
    int num;

    scanf("%d", &num);
    print_bits(num);

    return 0;
}

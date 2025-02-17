#include<stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop to print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Loop to print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }
    
    return 0;
}

// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j % 2 == 0) {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
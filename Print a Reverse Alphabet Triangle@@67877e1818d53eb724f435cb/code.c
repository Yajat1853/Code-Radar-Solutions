#include<stdio.h>

int main() {
    int n; 
    char m = 'A';
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        for(int j = i; j < 0; j--){
            printf("%c ", m++);
        }
        printf("\n");
    }
}
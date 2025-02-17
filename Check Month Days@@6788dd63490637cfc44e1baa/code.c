// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n < 1 || n > 12) {
        printf("Invalid month");
    }
    else if (n == 2){
        printf("28");
    }
    else if (n == 1 || n == 3 || n == 5 || n == 7 || n == 9 || n == 11 || n == 12) {
        printf("31");
    }
    else {
        printf("30");
    }
}
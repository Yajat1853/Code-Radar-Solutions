// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    if (n == 0 || n > 7 || n < 1) {
        printf("Invalid");
    } else {
        if (n == 1) {
        printf("Monday");
    }else if (n == 2) {
        printf("Tuesday");
    }else if (n == 3) {
        printf("Wednesday");
    }else if (n == 4) {
        printf("Thursday");
    }else if (n == 5) {
        printf("Friday");
    }else if (n == 6) {
        printf("Saturday");
    }else if (n == 7) {
        printf("Sunday");
    }
    }
    return 0;
}
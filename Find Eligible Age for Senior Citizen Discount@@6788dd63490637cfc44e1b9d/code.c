// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n > 60 || n == 60) {
        printf("Eligble");
    } else {
        printf("Not Eligible");
    }
    return 0;
}
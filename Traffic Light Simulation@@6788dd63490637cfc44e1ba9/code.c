// Your code here...
#include<stdio.h>

int main() {
    char[10] c;
    scanf("%s",&c);
    if (c == 'R') {
        printf("Stop");
    } 
    else if (c == "G") {
        printf("Go");
    }
    else if (c == "Y") {
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}

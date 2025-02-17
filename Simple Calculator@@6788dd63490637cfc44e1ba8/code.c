// Your code here...
#include<stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (ch == '+'){
        printf("%d",a + b);
    } 
    else if(ch == '-'){
        printf("%d",a - b);
    } 
    else if(ch == '*'){
        printf("%d",a * b);
    } 
    else if(ch == '/'){
        if(b == 0){
            printf("Error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}
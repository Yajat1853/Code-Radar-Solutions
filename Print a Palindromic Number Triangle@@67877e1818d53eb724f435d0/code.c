#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 1;
    int b = n - 1;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 1; j--){
            printf(" ");
        }
        for(int j = 1; j <= a; j++){
            printf("%d",j);
        }
        for(int k = b; k > 0; k--){
            printf("%d",k);
        }
        printf("\n");
        a++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 1; j--){
            printf(" ");
        }
        for(int j = 1; j <= a; j++){
            printf("%d",j);
        }
        printf("\n");
        a--;
    }
    return 0;
}
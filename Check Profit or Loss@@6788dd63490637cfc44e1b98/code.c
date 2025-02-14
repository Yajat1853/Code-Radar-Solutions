// Your code here....
#include<stdio.h>

int main(){
    int cp,sp ;
    scanf("%d",&cp);
    scanf("%d",&sp);

    if(cp > sp) {
        printf("Profit");
    } else if(cp == sp) {
        printf("No Profit No Loss");
    } else {
        printf("Loss");
    }
}
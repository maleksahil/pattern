#include<stdio.h>

int main(){

    char i,j;

    for(i='A'; i<='E'; i++){
        for(j=i; j>='A'; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
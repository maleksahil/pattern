#include<stdio.h>

int main(){

    for(int i=5; i>=1; i--){
        for(int space=1; space<=i-1; space++){
            printf("  ");
        }
        for(int j=i; j<=5; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
#include<stdio.h>

int main(){

    for(int col=1; col<=5; col++){
        for(int space=1; space<col; space++){
            printf("  ");
        }
        for(int rows=5; rows>=col; rows--){
              printf("%d ",rows);
        }
        printf("\n");
    }
}
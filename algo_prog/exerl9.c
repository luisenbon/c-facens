#include <stdio.h>

void mat(int a, int b);

int main(){

}

void mat(int a, int b){
    int mat[a][b];
    int i, j;
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("enter the value %i %i: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
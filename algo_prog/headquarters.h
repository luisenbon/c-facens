#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>

int headquarters(int val, int val2){
    int mat[val][val2];
    int i,j;
    for(i=0;i<val; i++){
        for(j=0;j<val2; j++){
            printf("whats the value for the section %ix%i: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
    return mat[val][val2];
}
#endif
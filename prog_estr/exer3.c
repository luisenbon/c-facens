#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tempe(int *x, int q);
void maior(int *x, int q);

int main(){
    int temp[31], quant;
    do{
        printf("Quantos dias: ");
        scanf("%i", &quant);
    }while(quant<0 || quant>31);
    tempe(temp, quant);
    maior(temp, quant);
}

void tempe(int *x, int q){
    int i;
    for(i=0;i<q;i++,x++){
        printf("Qual a temp do dia %i: ", i+1);
        scanf("%i", &*x);
    }
}

void maior(int *x, int q){
    int i, di, maior=*x;
    for(i=0; i<q; i++, x++){
        if(maior<*x){
            di=q;
            maior=*x;
        }
    }
    printf("O maior valor foi %i no dia %i", maior, di+1);
}

void media(int *x){
    int i, media;
    for(i=0;i<31;i++,x++){
        media=+*x;
    }
    media=media/2;
    printf("A media mensal e: %i", media);
}
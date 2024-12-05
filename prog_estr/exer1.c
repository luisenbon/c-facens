#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitu(int *x, int quant);
void soma(int *x, int *y, int *z, int quant);
void mostr(int *x, int quant);

int main(){
    int a[10], b[10], c[10], q;
    do{
        printf("Tamanho dos vetores(1-10): ");
        scanf("%i", &q);
    }while(q<1 || q>10);
    printf("Leituda vetor a: ");
    leitu(a,q);
    printf("Leitura vetor b: ");
    leitu(b,q);
    soma(a,b,c,q);
    mostr(c,q);
    printf("...");
    getchar();

}

void leitu(int *x, int quant){
    int i;
    for (i=0; i<quant; i++, x++){
        printf("Qual o valor de %i: ", i);
        scanf("%i", x);
        fflush(stdin);
    }
}

void soma(int *x, int *y, int *z, int quant){
    int i;
    for(i=0;i<quant; x++,y++,z++,i++){
        *z=*x+*y;
    }
}

void mostr(int *x, int quant){
    int i=0;
    for(i=0;i<quant;i++,x++){
        printf("\nValor da posicao %i: %i", i,*x);
    }
}

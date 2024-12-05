#include <stdio.h>
#include <stdlib.h>

void cadas_temp(int *x, int *y);
void maior_temp(int *x, int *y, int *z, int di);
void media_temp(int *x, float *y, int z);
void menor_temp(int *x, int *y, int *z, int di, float medi);

int main()
{
    int temp[99], menor[99], maior, dmaior, dias, qtde, h;
    float media;
    int i;
    
    printf("Quantos dias quer calcular: ");
    scanf("%i", &h);
    cadas_temp(temp, &h);

    printf("\nQuer pegar a maior de qual período: ");
    scanf("%i", &dias);

    maior_temp(temp, &maior, &dmaior,dias);
    printf("\nMaior temp foi: %i, no dia %i", maior, dmaior);

    media_temp(temp, &media, h);
    printf("\nA media da temp e: %f\n\n", media);
    
    menor_temp(temp, menor, &qtde ,h, media);

    for(i=0;i<qtde;i++){
        printf("A temperatura %i foi registrada no dia %i\n", *(temp+*(menor+i)), *(menor+i)+1);
    }
    
}

void cadas_temp(int *x, int *y){
    int i;
    for (i=0; i<*y; i++, x++){
        printf("Qual a temp do dia %i: ", i+1);
        scanf("%i", x);
    }
}

void maior_temp(int *x, int *y, int *z, int di){
    int i, ma=0;
    for (i=0; i<di; i++){
        if(ma<x[i]){
            ma=x[i];
            *y=ma;
            *z=i+1;
        }
    }
}

void media_temp(int *x, float *y, int z){
    *y=0;
    int i;
    for (i=0;i<z;i++){
        *y+=*(x+i);
    }
    *y/=z;
}

void menor_temp(int *x, int *y, int *z, int di, float medi){
    int i;
    *z=0;
    for (i=0; i<di; i++){
        if(*(x+i)<medi){
            *(y+*z)=i;
            (*z)++;
        }
    }
}

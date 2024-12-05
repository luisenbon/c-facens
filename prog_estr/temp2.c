#include <stdio.h>
#include <stdlib.h>

void cadas_temp(int *x, int h);
void media_temp(int *x, int h, float *m);
void maior_temp(int *x, int *ma,int h, int *mh);
void menor_temp(int *x, int *y, float medi, int h, int *ih);

int main(){
    int temp[99], menor[99], h, mh, mmh, ih, i, m;
    float media; 

    printf("\ndeseja a temp de quantos dias: ");
    scanf("%i", &h);
    cadas_temp(temp, h);

    printf("\nos calculos de quantos: ");
    scanf("%i", &mh);
    
    media_temp(temp, mh, &media);
    printf("\na media e: %f", media);

    maior_temp(temp, &m, h, &mh);
    printf("\na maior temp foi %i no dia %i", m, mh);

    menor_temp(temp, menor, media, h, &ih);
    for (i=0;i<ih;i++){
        printf("\nabaixo da media teve %i no dia %i", *(temp+*(menor+i)), *(menor+i)+1);
    }

}

void cadas_temp(int *x, int h){
    int i;
    for(i=0;i<h;i++,x++){
    printf("\nQual a temp pro dia %i: ", i+1);
    scanf("%i", x);
    }
}

void media_temp(int *x, int h, float *m){
    int i;
    *m=0;
    for (i=0;i<h;i++){
        *m+=*(x+i);
    }
    *m/=h;
}

void maior_temp(int *x, int *ma,int h, int *mh){
    int i=0;;
    *ma=0;
    for(i=0;i<h;i++){
        if(*ma<*(x+i)){
            *ma=*(x+i);
            *mh=i+1;
        }
    }
}

void menor_temp(int *x, int *y, float medi, int h, int *ih){
    int i,j;
    *ih=0;
    for(i=0;i<h;i++){
        if(*(x+i)<medi){
            *(y+(*ih))=i;
            (*ih)++;
        }
    }
}
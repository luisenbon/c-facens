#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct quarto{
    int num;
    char categoria;
    char status;
}quarto;

typedef struct hospede{
    int quarto;
    char nome[80];
    int acompanhante;
    char categoria;
    int dias;
}hospede;

void aloca_quarto(quarto **x, int h);
void aloca_hospede(hospede **x, int h);


int main(){
    quarto *pq;
    hospede *ph;
    int op;

    aloca_quarto(pq, 15);
    aloca_hospede(ph,cont)
    do{

    }while(op!=5);

     
}

void aloca_quarto(quarto **x, int h){
    if((*x=(quarto*)realloc(*x,h*sizeof(quarto)))==NULL)
    exit(1);
}

void aloca_hospede(hospede **x, int h){
    if((*x=(hospede*)realloc(*x,h*sizeof(hospede)))==NULL)
    exit(1);
}
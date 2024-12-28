#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hospede{
    int quarto;
    char nome[99];
    int acompanhante;
    chat categoria;
    int dias;
}hospede;

typedef struct quarto{
    int quarto;
    char categoria;
    char status;
}quarto;

void aloca_hospede(hospede **x, int y);
void aloca_quarto(quarto **x, int y);
void cadastrar_hospede(hospede *x)

int main (){

}

void aloca_hospede(hospede **x, int y){
    if((*x=(hospede*)realloc(*x,y*sizeof(hospede)))==NULL)
    exit(1);
}

void aloca_quarto(quarto **x, int y){
    if((*x=(quarto*)realloc(*x,y*sizeof(quarto)))==NULL)
    exit(1);
}
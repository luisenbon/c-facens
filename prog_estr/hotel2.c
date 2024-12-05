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



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct quarto{
    int num;
    char categoria;
    char status;
}quarto;

typedef struct hospede{
    int quarto;
    char nome[99];
    int acompanhante;
    char categoria;
    int dias;
}hospede;

void aloca_quarto(quarto **x, int h);
void aloca_hospede(hospede **x, int h);
void cadastra_quarto(quarto *x, int h);
void cadastra_hospede(hospede *ph, quarto *pq, int h);
int busca_quarto(quarto *x, int h, char cat);
int busca_hospede(hospede *ph, int h, int nq);

int main(){
    int cont=0, pos, op=5;
    quarto *pq=NULL;
    hospede *ph=NULL;

    aloca_quarto(&pq,15);
    cadastra_quarto(pq, 15);

    do{
        printf("1-Check-in\n2-Check-out\n3-Mostra Hospede\n4-Mostra quarto\n");
        scanf("%i", &op);
        switch(op){
            case 1:
            pos=busca_hospede(ph, cont, -1);
            if(pos==-1){
                aloca_hospede(&ph,cont+1);
                pos=cont;
                cont++;
            }
            break;

        }
    }while(op==5);

}

void aloca_quarto(quarto **x, int h){
    if((*x=(quarto*)realloc(*x,h*sizeof(quarto)))==NULL)
    exit(1);
}

void aloca_hospede(hospede **x, int h){
    if((*x=(hospede*)realloc(*x,h*sizeof(hospede)))==NULL)
    exit(1);
}

void cadastra_quarto(quarto *x, int h){
    int i;
    x->num=i+1;
    x->status='L';
    for (i=0;i<h;i++,x++){
        if(i<5){
            x->categoria='S';
        }
        else{
            x->categoria='F';
        }
    }
}

void cadastra_hospede(hospede *ph, quarto *pq, int h){
    printf("Nome: \n");
    gets(ph->nome);
    fflush(stdin);
    do{
    printf("Quantos acompanhantes: ");
    scanf("%i", &ph->acompanhante);
    }while(ph->acompanhante>3 || ph->acompanhante<0);
    if(ph->acompanhante==0){
        ph->categoria='S';
    }
    else{
        ph->categoria='F';
    }
    ph->quarto=busca_quarto(pq,h,ph->categoria);
}

int busca_quarto(quarto *x, int h, char cat){
    int i;
    for (i=0;i<h;i++,x++){
        if(x->categoria==cat && x->status=='L'){
            x->status='O';
            return(x->num);
        }
        else{
            return -1;
        }
    }
}

int busca_hospede(hospede *ph, int h, int nq){
    int i;
    for(i=0;i<h;i++,ph++){
        if(ph->quarto==nq){
            return i;
        }
        else{
            return -1;
        }
    }
}
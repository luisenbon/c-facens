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
    char nome[90];
    int acompanhante;
    char categoria;
    int dias;
}hospede;

void aloca_quarto(quarto **pq, int h);
void aloca_hospede(hospede **ph, int h);
void cadastra_quarto(quarto *pq, int h);
void cadastra_hospede(hospede *ph, quarto *pq, int h);
int busca_quarto(quarto *pq, int h, char cat);
void checkout(quarto *ph, int qh, quarto *pq, int qq);
int busca_hospede(hospede *ph, int qh, int nq);
void mostra_quarto(quarto *pq, int qq);
void mostra_hospede(hospede *ph, int qh);

int main (){
    int cont=0, op, pos;
    quarto *pq=NULL;
    hospede *ph=NULL;
    aloca_quarto(&pq, 15);
    cadastra_quarto(pq, 15);

    do{
        printf("1-Check-in\n2-Check-out\n3-Mostra quarto\n4-Mostra hospede\n5-Fim\n");
        scanf("%i", &op);
        switch(op){
            case 1:
            pos=busca_hospede(ph, cont, -1);
            if(pos==-1){
                aloca_hospede(&ph, cont+1);
                pos=cont;
                cont++;
            }
            cadastra_hospede(ph, pq, pos);
            break;

            case 2:
            checkout(ph, cont, pq, 15);
            break;

            case 3:
            mostra_quarto(pq, 15);
            break;

            case 4:
            mostra_hospede(ph, cont);
            break;
        }
    }while(op=!5);

}

void aloca_quarto(quarto **pq, int h){
    if((*pq=(quarto*)realloc(*pq,h*sizeof(quarto)))==NULL)
    exit(1);
}

void aloca_hospede(hospede **ph, int h){
    if((*ph=(hospede*)realloc(*ph,h*sizeof(hospede)))==NULL)
    exit(1);
}

void cadastra_quarto(quarto *pq, int h){
    int i;
    for(i=0;i<h;i++,pq++){
        pq->num=i+1;
        pq->status='L';
        if(i<5){
            pq->categoria='S';
        }
        else{
            pq->categoria='F';
        }
    }
}

void cadastra_hospede(hospede *ph, quarto *pq, int h){
    printf("Nome: \n");
    gets(ph->nome);
    fflush(stdin);
    do{
        printf("Acompanhantes(1~3): \n");
        scanf("%i", &ph->acompanhante);
    }while(ph->acompanhante>3 || ph->acompanhante<0);
    if(ph->acompanhante==0){
        ph->categoria='S';
    }
    else{
        ph->categoria='F';
    }
    ph->quarto=busca_quarto(pq, h, ph->categoria);
    if(ph->quarto==-1){
        printf("Sem quartos\n");
    }
    else{
        printf("Quantos dias: \n");
        scanf("%i", &ph->dias);
        printf("Cadastrado! Quarto %i", ph->quarto);
    }
}

int busca_quarto(quarto *pq, int h, char cat){
    int i;
    for(i=0;i<h;i++,pq++){
        if(pq->status=='L' && pq->categoria==cat){
            pq->categoria='O';
            return pq->num;
        }
        else{
            return -1;
        }
    }
}

int busca_hospede(hospede *ph, int qh, int nq){
    int i;
    for(i=0;i<qh;i++,ph++){
        if(ph->quarto==nq){
            return i;
        }
        else{
            return -1;
        }
    }
}

void check
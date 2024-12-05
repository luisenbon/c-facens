#include <stdio.h>
#include <string.h>
#include <sdblib.h>

typedef struct luta{
    int regaula;
    int qaluno;
    char modalidade;
    char turno;
    float valor;
}luta;

typedef struct aluno{
    char cpf[13];
    char nome[80];
    int numaula;
}aluno;

void aloca_aluno(aluno **x, int q);
void aloca_luta(luta **x, int q);
void mostra_luta(luta *x, int q);

int main(){
    luta *p1=NULL;
    aluno *p2=NULL;
    int op, cont=0;
    aloca_luta(&p1,6);
    aloca_aluno(&p2, cont);
    do{
        printf("[1]Matricula\n[2]Mostrar alunos\n[3]fim\n")
    };
    scanf("%i", &op);
    switch(op){
        case 1:
        cadastrar_aluno(p1,6,&p2)
    }
}

void aloca_aluno(aluno**x, int q){
    if((*x=(aluno*)realloc(*x,q*sizeof(aluno)))==NULL)
    exit(1);
}

void aloca_luta(luta **x, int q){
    if((*x=(luta*)realloc(*x,q*sizeof(luta)))==NULL)
    exit(1);
}

void mostra_luta(luta *x, int q){
    int i;
    for (i=0;i<q;i++)
}
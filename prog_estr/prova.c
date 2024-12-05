#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct luta{
    int regaula;
    int qaluno;
    char modalidade;
    char turno;
    float valor;
}luta;

typedef struct aluno{
    char CPF[13];
    char nome[80];
    int numaula;
}aluno;

void aloca_aluno(aluno **x, int quan);
void aloca_luta(luta **x, int quan);
void cadastrar_aluno(aluno *x);
void cadastra_luta();
void busca_luta();
void mostra_luta();
void mostra_aluno();

int main (){

    aluno *pa=NULL;
    luta *pl=NULL;

    int qa=0;

    aloca_aluno(&pa, qa+1);
    qa++;

    cadastrar_aluno(pa+qa);

}

void aloca_aluno(aluno **x, int quan){
    if((*x=(aluno*)realloc(*x,quan*sizeof(aluno)))==NULL)
    exit(1);
}

void aloca_luta(luta **x, int quan){
    if((*x=(luta*)realloc(*x, quan*sizeof(luta)))==NULL)
    exit(1);
}

void cadastrar_aluno(aluno *x){
    printf("Qual o nome: ");
    gets(x->nome);
    printf("Qual o CPF: ");
    gets(x->CPF);
    fflush(stdin);
    do{
    printf("Qual o numero da aula: ");
    scanf("%i", &x->regaula);
    }while
}

void cadastrar_luta(luta *x){

    scanf("%c", &*x);
    c=x;
    while(c<0 || c>6);
    x->regaula;
    
}
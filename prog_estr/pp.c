#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro{
    char titulo[100];
    char autor[100];
    int ano;
    char status;
}livro;

void cadastra_livro (livro *l, int ql);
void aloca_livro (livro **l, int ql);

int main(){
    int cont=0, op, ja=1;
    livro *p=NULL;
    aloca_livro(&p, cont);
    do{
        printf("Qual a opcao desejada:\nCadastrar Livro - 1\nBuscar Livro - 2\nAlterar Status - 3\nFechar - 4\n\n");
        scanf("%i", &op);
        switch(op){
            case 1:
            cadastra_livro(p,cont++);
            break;
            case 2:
            busca_livro(p,cont);
            break;
            case 3:
            alterar_livro(p,cont);
            break;
            case 4:
            ja++;
            break;
            default:
            printf("Informar outra opcao");
            break;
        }
    }while(ja==1);
}

void aloca_livro (livro **l, int ql){
    if((*l=(livro*)realloc(*l,ql*sizeof(livro)))==NULL)
        exit(EXIT_FAILURE);
}
void cadastra_livro (livro *l, int ql){
    printf("Qual o nome do pedaco: ");
    gets(l->titulo);
    printf("Qual o autor: ");
    gets(l->autor);
    printf("Qual o ano: ");
    scanf("%i",l->ano);
    l->status = 'D';
    printf("Status: Disponivel");
    fflush(stdin);
}
void buscar_livro(livro *l, int ql){

}

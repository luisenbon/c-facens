#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nota(int *x);
void media(int *x, int *y, int *z);

int main(){
int n1[10], n2[10], m[10];
printf("Digite as Ac1s: ");
nota(n1);
printf("Digite as Ac2s: ");
nota(n2);
media(n1,n2,m);
}

void nota(int *x){
    int i;
    for(i=0; i<10; i++,x++){
    do{
        printf("Qual a nota do aluno %i", i);
        scanf("%i", &*x);
        fflush(stdin);
    }while(*x<0 || *x>10);
}
}

void media(int *x, int *y, int *z){
    int i;
    for (i=0;i<10;i++,x++,y++,z++){
        *z=(*x*+*y)/2;
    }
    for(i=0; i<10; i++, z++){
    if(*z>7){
        printf("Aprovado");
    }
    else if(4<=*z && *z<7){
        printf("Exame");
    }
    else{
        printf("Reprovado");
    }
    }
}

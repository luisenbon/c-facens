#include <stdio.h>

static void E1(int E1){
    int E1i;
    for(E1i = 0; E1i < 10; E1i++){
        printf("1-Qual o valor %i: ", E1i+1);
        scanf("%i", &E1);
        printf("1-O dobro %i e: %i\n", E1, E1*2);
    }
}
static void E2(int E2){
    int E2i;
    printf("2-Qual o numero:");
    scanf("%i", &E2);
    for(E2i = 0; E2i < 10; E2i++){
        printf("2-A tabuada de %i e: %i\n", E2, E2*(E2i+1));
    }
}
static void E3(int E3){
    int E3i;
    for(E3i = 0; E3i < 10; E3i++){
        printf("3-Qual o valor %i: ", E3i+1);
        scanf("%i", &E3);
         if (E3 < 0){
        printf("3-O valor e negativo\n");
    }
    else if (E3 > 0){
        printf("3-O valor e positivo\n");
    }
    else{
        printf("3-O valor e zero\n");
    }
    }
}
static void E4(int E4, int EE4) {
	int E4i;
	for(E4i=E4; E4i<=EE4; E4i++);
	{
		printf("%i esta dentro do periodo\n", E4i);
	}
}

static void E5(int E5) {
    int E5i;
    printf("Os numeros pares entre 10 e 8.");
    for(E5i=10; E5i<=80; E5i+2) {
        printf("%i esta no periodo", E5i);
    }
}

static void E6(int E6) {
    printf("Os numeros inteiros entre 1000 e 1 sao:");
    for(E6=1000; E6>=1;E6--) {
        printf("%i esta no prazo",E6);
    }
}

static void E7(float E7, float EE7) {
    int E7i, E7R;
    for(E7i=30; E7i>=0; E7i--) {
        printf("Qual a nota da teoria e pratica: ");
        scanf("%f %f", &E7, &EE7);
        E7=E7*0.6;
        EE7=EE7*0.4;
        E7R=E7+EE7;
        if(E7R>=7) {
            printf("Foi bem");
        }
        else if(5<=E7R<7) {
            printf("Foi razoavel");
        }
        else {
            printf("Foi mal");
        }
    }
}

int main()
{
    int e1;
    E1(e1);

    int e2;
    E2(e2);

    int e3;
    E3(e3);

    int e4, ee4;
    printf("4-Qual o primeiro e segundo numero inteiro:");
	scanf("%i %i",&e4, &ee4);
	E4(e4, ee4);
	
	int e5;
	E5(e5);
	
	int e6;
	E6(e6);
	
	float e7, ee7;
	E7(e7, ee7);
}
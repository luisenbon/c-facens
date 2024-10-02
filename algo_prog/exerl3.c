#include <stdio.h>
#include <math.h>

static void E1(float E1)
{
    if (E1 < 0)
    {
        printf("O valor e negativo\n");
    }
    else if (E1 > 0)
    {
        printf("O valor e positivo\n");
    }
    else
    {
        printf("O valor e zero\n");
    }
}
static void E2(float E2, float EE2, float EEE2)
{
    if (EEE2 >= E2 && EEE2 <= EE2)
    {
        printf("O valor esta esta na faixa\n");
    }
    else
    {
        printf("O valor nao esta na faixa\n");
    }
}
static void E3(float E3, float EE3)
{
    float R3=E3/(sqrt(EE3));
    if(R3<18,5){
        printf("Abaixo do peso\n");
    }
    else if(R3>=18,5 && R3<24,9){
        printf("Saudavel\n");
    }
    else if(R3>=24,9 && R3<29,9){
        printf("Sobrepeso\n");
    }
    else if(R3>=29,9 && R3<34,9){
        printf("Obesidade grau 1\n");
    }
    else if(R3>=34,9 && R3<39,9){
        printf("Obesidade grau 2\n");
    }
    else{
        printf("Obesidade grau 3\n");
    }
}
static void E4(float E4, float EE4, float EEE4)
{
    if(E4==EE4 || EE4==E4){
        printf("Os valor repetido e: %f\n", E4);
    }
    else if(E4==EEE4 || EEE4==E4){
        printf("Os valores repetido e: %f\n", E4);
    }
    else if(EE4==EEE4 || EEE4==EE4){
        printf("Os valores repetido e: %f\n", EE4);
    }
    else{
        printf("Os valores sao diferentes\n");
    }
}
static void E5(float E5, float EE5, float EEE5)
{
    if (E5 > EE5 && E5 > EEE5)
    {
        printf("O maior e: %f\n", E5);
    }
    else if (EE5 > E5 && EE5 > EEE5)
    {
        printf("O maior e: %f\n", EE5);
    }
    else if (EEE5 > E5 && EEE5 > EE5)
    {
        printf("O maior e: %f\n", EEE5);
    }
    else
    {
        printf("Os valores sao iguais\n");
    }
}

static void E6(float E6, float EE6, int EEE6) {
float R6, C6;
switch(EEE6) 
{
case 1:
printf("O valor e %f\n", E6+EE6);
break;

case 2: 
printf("O valor e %f\n", E6-EE6) ;
break;

case 3:
printf("O valor e %f\n", E6/EE6) ;
break;

case 4:
printf (" O valor e %f\n", E6*EE6) ;
break;

default:
printf("Invalido\n");
}
}

static void E7(int E7, int EE7, int EEE7) 
{
if(E7==EE7 && EE7==EEE7){
printf("O triangulo e equilatero\n");
}
else if(E7==EE7 || EE7==EEE7 || E7==EEE7){
printf("O triangulo e isosceles\n");
}
else{
printf("O triangulo e escaleno\n");
}
}

static void E8(int E8, int EE8, float EEE8) 
{
if(EE8>=12 && EE8<=17){
    printf("Adolescente\n");}
else if(EE8>=18 && EE8<=25){
    printf("Jovem\n");}
else{
    printf("Adulto\n");
}
    if(E8==1){
        printf("Seu peso ideal: %f\n", (72.7*EEE8)-62);
    }
    else{
        printf("Seu peso ideal: %f\n", (62.1*EEE8)-48.7);
}
}

int main()
{
    float e1;
    printf("1-Qual o valor:");
    scanf("%f", &e1);
    E1(e1);

    int e2, ee2, eee2;
    printf("2-Qual o intervalo 1 e 2:");
    scanf("%i %i", &e2, &ee2);
    printf("2-Qual o numero:");
    scanf("%i", &eee2);
    E2(e2, ee2, eee2);

    float e3, ee3;
    printf("3-Qual seu peso e altura:");
    scanf("%f %f", &e3, &ee3);
    E3(e3, ee3);

    float e4, ee4, eee4;
    printf("4-Qual o valor 1, 2 e 3:");
    scanf("%f %f %f", &e4, &ee4, &eee4);
    E4(e4, ee4, eee4);

    float e5, ee5, eee5;
    printf("5-Qual o valor 1, 2 e 3:");
    scanf("%f %f %f", &e5, &ee5, &eee5);
    E5(e5, ee5, eee5);

    float e6, ee6;
    int eee6;printf("Qual a operacao desejada:\n1-Adicao\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n");
    scanf("%i", &eee6);
    printf("Qual os valores:");
    scanf("%f %f", &e6, &ee6);
    E6(e6, ee6, eee6);
    
    int e7, ee7, eee7;
    printf("Qual os 3 lados do triangulo:");
    scanf("%i %i %i", &e7, &ee7, &eee7);
    E7(e7, ee7, eee7);
    
    int e8, ee8;
    float eee8;
    while(1) 
    {
        printf("Qual seu sexo:\n1-H: \n2-M: \n");
        scanf("%i",&e8);
        if(e8==1 || e8==2)
        {
            printf("Qual sua idade:");
            scanf("%i",&ee8);
            if(ee8>=12 && ee8<=65){
                printf("Qual sua altura:");
                scanf("%f",&eee8);
                E8(e8, ee8, eee8);
                break;
            }
            else{
                printf("Idade invalida\n");
            }
        }
        else{
            printf("Sexo invalido\n");
        }
        
}
}
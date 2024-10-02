#include <stdio.h>
#include <math.h>
const float PI=3.14159;

static int E1(int I);
static int E2(int E2, int EE2);
static float E3(float E3);
static int E4(int E4);
static int E5(int E5, int E55);
static int EE5(int EE5, int EE55);
static int E6(int E6, int EE6);
static float E7(float E7);
static float E8(float E8);
static int E9(int E9);
static int EE9(int EE9);
static float E12(float E12, float EE12);
static int E13(int E13);
static float E14(float E14, float EE14);

int main()
{
    int i;
    printf("Qual o valor: ");
    scanf("%i", &i);
    i=E1(i);
    printf("O dobro do valor e: %i\n", i);

    int e2, ee2, r2;
    printf("Qual o 1 e 2 valor: ");
    scanf("%i %i", &e2, &ee2);
    r2=E2(e2, ee2);
    printf("A media e: %i\n", r2);

    float e3;
    printf("Quantos metros: ");
    scanf("%f", &e3);
    e3=E3(e3); 
    printf("Em cm e: %.2f\n", e3);

    int e4;
    printf("Qual o nascimento: ");
    scanf("%i", &e4);
    e4=E4(e4);
    printf("Os dias de vida e: %i\n", e4);

    int e5, ee5, r5, r55;
    printf("Qual o 1 e 2 valor: ");
    scanf("%i %i", &e5, &ee5);
    r5=E5(e5, ee5);
    r55=EE5(e5, ee5);
    printf("A divisao e: %i, o resto e: %i\n", r5, r55);

    int e6, ee6;
    printf("Qual a base e altura do triangulo: ");
    scanf("%i %i", &e6, &ee6);
    e6=E6(e6, ee6);
    printf("A area e: %i\n", e6);

    float e7;
    printf("Quantos fahrenheit: ");
    scanf("%f", &e7);
    e7=E7(e7);
    printf("Em celsius e: %f\n", e7);

    float e8;
    printf("Qual o raio: ");
    scanf("%f", &e8);  
    e8=E8(e8);
    printf("O perimetro e: %f\n", e8);

    int e9, r9, rr9;
    printf("Qual o numero: ");
    scanf("%i", &e9);
    r9=E1(e9);
    rr9=E2(e9, r9);
    printf("A raiz e %i e a 8potencia e %i\n", r9, rr9);

    int e10, ee10;
    printf("Qual a distancia e o combustivel gasto em L: ");
    scanf("%i %i", &e10, &ee10);
    e10=E5(e10, ee10);
    printf("O consumo medio e: %i\n", e10);

    int e11, ee11;
    printf("Qual a distancia e tempo: ");
    scanf("%i %i", &e11, &ee11);
    e10=E5(e11, ee11);
    printf("A velocidade media e: %i\n", e11);

    float e12, ee12;
    printf("Qual as horas e horas extras: ");
    scanf("%f %f", &e12, &ee12);
    e12=E12(e12, ee12);
    printf("O salario e: %f\n", e12);

    int e13;
    printf("Qual o numero de dias: ");
    scanf("%i", &e13);
    e13=E13(e13);
    printf("O numero de semanas e: %i\n", e13);

    float e14, ee14;
    printf("Qual a nota da prova 1 e 2");
    scanf("%f %f", &e14, &ee14);
    e14=E14(e14, ee14);
    printf("A media e: %f\n", e14);

}
static int E1(int I)
{
    I=I*2;
    return I;
}
static int E2(int E2, int EE2)
{
    int R2;
    R2=(E2+EE2)/2;
    return R2;
}
static float E3(float E3)
{
    E3=E3*100;
    return E3;
}
static int E4(int E4)
{
    E4=2024-E4;
    E4=E4*12;
    E4=E4*30;
    return E4;
}
static int E5(int E5, int E55)
{
    int R5;
    R5=E5/E55;
    return R5;
}
static int EE5(int EE5, int EE55)
{
    int RR5;
    RR5=EE5%EE55;
    return RR5;
}
static int E6(int E6, int EE6)
{
    int R6;
    R6=E6*EE6;
    R6=R6/2;
    return R6;
}
static float E7(float E7)
{
    float R7;
    R7=(E7-32)/1.8;
    return R7;
}
static float E8(float E8)
{
    float R8;
    R8=PI*E8*2;
    return R8;

}
static int E9(int E9)
{
    E9=sqrt(E9);
    return E9;
}
static int EE9(int EE9)
{
    EE9=pow(EE9, 8);
    return EE9;
}
static float E12(float E12, float EE12)
{
    float R12;
    R12=(E12*10)+(EE12*15);
    return R12;
}
static int E13(int E13)
{
    E13=E13*35;
    E13=E13*0.08;
    return E13;
}
static float E14(float E14, float EE14)
{
    float R14=E14*0.4;
    float RR14=EE14*0.6;
    return R14+RR14;
}
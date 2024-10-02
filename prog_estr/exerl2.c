#include <stdio.h>

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
static void E2(float E2)
{
    if (E2 >= 0 && E2 <= 9)
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
    float R3;
    if (EE3 == 0)
    {
        printf("Nao e possivel dividir por 0\n");
    }
    else
    {
        R3 = E3 / EE3;
        printf("A divisao e: %f\n", R3);
    }
}
static void E4(float E4, float EE4)
{
    float R4 = (E4 + EE4) / 2;
    if (R4 >= 5)
    {
        printf("aprovado\n");
    }
    else
    {
        R4 = 5 - R4;
        printf("falatam %f pontos\n", R4);
    }
}
static void E5(float E5, float EE5)
{
    if (E5 > EE5)
    {
        printf("O maior e: %f\n", E5);
    }
    else if (E5 < EE5)
    {
        printf("O maior e: %f\n", EE5);
    }
    else
    {
        printf("Os valores sao iguais\n");
    }
}
static void E6(float E6, float EE6)
{
    if (E6 < EE6)
    {
        printf("A ordem crescente: %f %f\n", E6, EE6);
    }
    if (E6 > EE6)
    {
        printf("A ordem crescente: %f %f\n", EE6, E6);
    }
    if (E6 == EE6)
    {
        printf("Os valores sao iguais\n");
    }
}
static float E7(float E7)
{
    float R7 = E7;
    if (E7 <= 1000)
    {
        R7 += R7 * 0.05;
        return R7;
    }
    if (E7 > 1000)
    {
        R7 += R7 * 0.07;
        return R7;
    }
}
static float E8(float E8)
{
    float R8 = E8 - 50;
    if (E8 <= 50)
    {
        printf("O valor e 0\n");
    }
    else
    {
        R8 = R8 * 1.50;
        R8 = R8 + 50;
        return R8;
    }
}
static void E9(int E9)
{
    if (E9 % 4 == 0 && E9 % 100 != 0 || E9 % 400 == 0)
    {
        printf("O ano e bissexto\n");
    }
    else
    {
        printf("O ano nao e bissexto\n");
    }
}
int main()
{
    float e1;
    printf("Qual o valor:");
    scanf("%f", &e1);
    E1(e1);

    float e2;
    printf("Qual o valor:");
    scanf("%f", &e2);
    E2(e2);

    float e3, ee3;
    printf("Qual os valores:");
    scanf("%f %f", &e3, &ee3);
    E3(e3, ee3);

    float e4, ee4;
    printf("Qual as notas:");
    scanf("%f %f", &e4, &ee4);
    E4(e4, ee4);

    float e5, ee5;
    printf("Qual os 2 valores:");
    scanf("%f %f", &e5, &ee5);
    E5(e5, ee5);

    float e6, ee6;
    printf("Qual os 2 numeros:");
    scanf("%f %f", &e6, &ee6);
    E6(e6, ee6);

    float e7;
    printf("Qual o salario:");
    scanf("%f", &e7);
    e7 = E7(e7);
    printf("O salario e: %f\n", e7);

    float e8;
    printf("Quantos minutos:");
    scanf("%f", &e8);
    e8 = E8(e8);
    printf("O gasto e: %f\n", e8);

    int e9;
    printf("Qual o ano:");
    scanf("%i", &e9);
    E9(e9);

    return 0;
}
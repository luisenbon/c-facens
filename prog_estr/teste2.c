#include<stdio.h>
#include<conio.h>
#include<windows.h>

float produto (float a, float b); //prot tipo�
int main()
{
float n1, n2, resultado;
char w;
printf("Digite dois valores: ");
scanf("%f %f", &n1,&n2);
resultado=produto(n1,n2); //chamada
printf("\nO produto \x82 igual a %.2f.",resultado);
printf("\n\nPressione uma tecla para sair...");

w=getch();
printf("%c",w);
Sleep(5000);
return 0;
}
float produto (float a, float b) //definicao
{
float p;
p= a*b;
return p;
}
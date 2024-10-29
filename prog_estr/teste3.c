#include <conio.h>
#include <stdio.h>

int main() {
    char senha[20];
    int i = 0;
    
    printf("Digite sua senha: ");
    
    while (1) {
        char ch = getch();  // Lê um caractere sem mostrar na tela

        if (ch == '\r') {   // '\r' é o código ASCII para Enter
            senha[i] = '\0'; // Termina a string
            break;
        } else {
            senha[i++] = ch;
            printf("*");  // Exibe um '*' para cada caractere digitado
        }
    }

    printf("\nSenha digitada: %s\n", senha);  // Exibe a senha digitada (não recomendado em produção)

    return 0;
}

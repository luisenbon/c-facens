#include <stdio.h>
#include <conio.h> // Para getch()
#include <windows.h> // Para Sleep()

void E1(int e1);
void E2(int e2);

int main() {
    E2(10);
    Sleep(5000);
}

void E2(int e2) {
    char pal[e2 + 1];
    int i = 0;
    int valid = 0; // Inicializa valid como 0 (false)

    while (!valid) { // Loop executa enquanto valid é 0 (false)
        printf("Insert a word (between 3 and 10 characters): ");
        i = 0;
        while (1) {
            char c = getch();
            if (c == '\r') { // Se o Enter for pressionado
                pal[i] = '\0'; // Termina a string
                break;
            } else {
                pal[i] = c; // Armazena o caractere
                printf("*"); // Exibe um asterisco
                i++;
            }
        }

        // Verifica se a palavra tem comprimento válido
        if (i >= 3 && i <= 10) {
            valid = 1; // Se for válido, define valid como 1 (true)
            printf("\nYou entered a valid word: %s\n", pal);
        } else {
            printf("\nInvalid input. \n");
            valid = 0; // Mantém valid como 0 (false) se a entrada for inválida
        }
    }
}


void E1(int e1){
    char s1[e1+1];
    char s2[e1+1];
    int v=0, i=0;
    printf("insert the password: ");
    for(i=0;i<e1;i++){
        char c = getch();
        if(c=='\r'){
            s1[i]='\0';
            break;
        }
        else{
        s1[i]=c;
        printf("*");
        }
    }
    printf("\n");
    printf("repeat: ");
    for(i=0;i<e1;i++){
        char c = getch();
        if(c=='\r'){
            s2[i]='\0';
            break;
        }
        else{
            s2[i]=c;
            printf("*");
        }
    }
    printf("\n");
    for(i=0;i<e1;i++){
        if(s1[i]==s2[i]){
            v++;
        }
    }
    if(v==6){
    printf("equal");
    }
    else if(v>=3){
        printf("error");
    }
    else{
        printf("not equal");
    }
}
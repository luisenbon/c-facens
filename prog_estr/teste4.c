#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main (){
    char senha[30];
    printf("Coloque uma senha: ");
    int i = 0;
    while(1){
        char ca = getch();
        if(ca == '\r'){
            senha[i] = '\0';
            break;
    }
    else{
        senha[i]=ca;
        printf("*");
        i++;
    }
}
printf("\nSenha digitada: %s\n", senha);
Sleep(5000);
}
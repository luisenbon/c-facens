#ifndef RANDOM_H
#define RANDOM_H
#include <stdio.h>
#include <stdlib.h> // Para rand() e srand()
#include <time.h>   // Para time()

float random(int fim){
    // Definir a semente baseada no tempo atual
    srand(time(NULL));
    // Gerar um número aleatório dentro de um intervalo específico (por exemplo, 0 a 99)
    return rand() % fim;;
}
#endif
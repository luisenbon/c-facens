#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estruturas
typedef struct {
    int num;         // Número do quarto
    char categoria;  // [S]olteiro ou [F]amiliar
    char status;     // [L]ivre ou [O]cupado
} Quarto;

typedef struct {
    int quarto;      // Número do quarto
    char nome[80];
    int acompanhantes;#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estruturas
typedef struct {
    int num;         // Número do quarto
    char categoria;  // [S]olteiro ou [F]amiliar
    char status;     // [L]ivre ou [O]cupado
} Quarto;

typedef struct {
    int quarto;      // Número do quarto
    char nome[80];
    int acompanhantes;
    char categoria;  // [S]olteiro ou [F]amiliar
    int dias;        // Tempo de permanência em dias
} Hospede;

// Função para inicializar os quartos
void inicializarQuartos(Quarto *quartos, int total) {
    for (int i = 0; i < total; i++) {
        quartos[i].num = i + 1;
        quartos[i].categoria = (i < 5) ? 'S' : 'F';
        quartos[i].status = 'L';
    }
}

// Função para encontrar um quarto disponível
int encontrarQuarto(Quarto *quartos, int total, char categoria) {
    for (int i = 0; i < total; i++) {
        if (quartos[i].categoria == categoria && quartos[i].status == 'L') {
            return i;
        }
    }
    return -1; // Nenhum quarto disponível
}

// Função para fazer check-in
void checkIn(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    Hospede novo;
    printf("Nome do hóspede: ");
    scanf(" %[^\n]", novo.nome);
    printf("Número de acompanhantes: ");
    scanf("%d", &novo.acompanhantes);

    novo.categoria = (novo.acompanhantes == 0) ? 'S' : 'F';
    int indiceQuarto = encontrarQuarto(quartos, totalQuartos, novo.categoria);

    if (indiceQuarto == -1) {
        printf("Desculpe, não há quartos disponíveis na categoria %c.\n", novo.categoria);
        return;
    }

    printf("Dias de permanência: ");
    scanf("%d", &novo.dias);

    novo.quarto = quartos[indiceQuarto].num;
    quartos[indiceQuarto].status = 'O'; // Marcar como ocupado

    // Alocar dinamicamente espaço para o novo hóspede
    *hospedes = realloc(*hospedes, (*totalHospedes + 1) * sizeof(Hospede));
    (*hospedes)[*totalHospedes] = novo;
    (*totalHospedes)++;

    printf("Check-in realizado com sucesso! Quarto %d atribuído.\n", novo.quarto);
}

// Função para fazer check-out
void checkOut(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    int numQuarto;
    printf("Número do quarto para check-out: ");
    scanf("%d", &numQuarto);

    int encontrado = -1;
    for (int i = 0; i < *totalHospedes; i++) {
        if ((*hospedes)[i].quarto == numQuarto) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Nenhum hóspede encontrado no quarto %d.\n", numQuarto);
        return;
    }

    Hospede h = (*hospedes)[encontrado];
    float valorDiaria = (h.categoria == 'S') ? 85.0 : 65.0;
    float total = valorDiaria * (h.acompanhantes + 1) * h.dias;

    printf("\n--- Relatório de Check-out ---\n");
    printf("Nome: %s\n", h.nome);
    printf("Quarto: %d\n", h.quarto);
    printf("Categoria: %c\n", h.categoria);
    printf("Acompanhantes: %d\n", h.acompanhantes);
    printf("Dias: %d\n", h.dias);
    printf("Total a pagar: R$ %.2f\n", total);

    // Atualizar o quarto para "Livre"
    for (int i = 0; i < totalQuartos; i++) {
        if (quartos[i].num == h.quarto) {
            quartos[i].status = 'L';
            break;
        }
    }

    // Remover o hóspede da lista
    for (int i = encontrado; i < *totalHospedes - 1; i++) {
        (*hospedes)[i] = (*hospedes)[i + 1];
    }
    (*hospedes) = realloc(*hospedes, (*totalHospedes - 1) * sizeof(Hospede));
    (*totalHospedes)--;
}

// Função principal
int main() {
    Quarto quartos[15];
    Hospede *hospedes = NULL;
    int totalHospedes = 0;

    inicializarQuartos(quartos, 15);

    int opcao;
    do {
        printf("\n--- Controle de Hotel ---\n");
        printf("[1] Check-in\n");
        printf("[2] Check-out\n");
        printf("[3] Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                checkIn(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 2:
                checkOut(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    // Liberar memória alocada
    free(hospedes);
    return 0;
}

    char categoria;  // [S]olteiro ou [F]amiliar
    int dias;        // Tempo de permanência em dias
} Hospede;

// Função para inicializar os quartos
void inicializarQuartos(Quarto *quartos, int total) {
    for (int i = 0; i < total; i++) {
        quartos[i].num = i + 1;
        quartos[i].categoria = (i < 5) ? 'S' : 'F';
        quartos[i].status = 'L';
    }
}

// Função para encontrar um quarto disponível
int encontrarQuarto(Quarto *quartos, int total, char categoria) {
    for (int i = 0; i < total; i++) {
        if (quartos[i].categoria == categoria && quartos[i].status == 'L') {
            return i;
        }
    }
    return -1; // Nenhum quarto disponível
}

// Função para fazer check-in
void checkIn(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    Hospede novo;
    printf("Nome do hóspede: ");
    scanf(" %[^\n]", novo.nome);
    printf("Número de acompanhantes: ");
    scanf("%d", &novo.acompanhantes);

    novo.categoria = (novo.acompanhantes == 0) ? 'S' : 'F';
    int indiceQuarto = encontrarQuarto(quartos, totalQuartos, novo.categoria);

    if (indiceQuarto == -1) {
        printf("Desculpe, não há quartos disponíveis na categoria %c.\n", novo.categoria);
        return;
    }

    printf("Dias de permanência: ");
    scanf("%d", &novo.dias);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estruturas
typedef struct {
    int num;         // Número do quarto
    char categoria;  // [S]olteiro ou [F]amiliar
    char status;     // [L]ivre ou [O]cupado
} Quarto;

typedef struct {
    int quarto;      // Número do quarto
    char nome[80];
    int acompanhantes;
    char categoria;  // [S]olteiro ou [F]amiliar
    int dias;        // Tempo de permanência em dias
} Hospede;

// Função para inicializar os quartos
void inicializarQuartos(Quarto *quartos, int total) {
    for (int i = 0; i < total; i++) {
        quartos[i].num = i + 1;
        quartos[i].categoria = (i < 5) ? 'S' : 'F';
        quartos[i].status = 'L';
    }
}

// Função para encontrar um quarto disponível
int encontrarQuarto(Quarto *quartos, int total, char categoria) {
    for (int i = 0; i < total; i++) {
        if (quartos[i].categoria == categoria && quartos[i].status == 'L') {
            return i;
        }
    }
    return -1; // Nenhum quarto disponível
}

// Função para fazer check-in
void checkIn(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    Hospede novo;
    printf("Nome do hóspede: ");
    scanf(" %[^\n]", novo.nome);
    printf("Número de acompanhantes: ");
    scanf("%d", &novo.acompanhantes);

    novo.categoria = (novo.acompanhantes == 0) ? 'S' : 'F';
    int indiceQuarto = encontrarQuarto(quartos, totalQuartos, novo.categoria);

    if (indiceQuarto == -1) {
        printf("Desculpe, não há quartos disponíveis na categoria %c.\n", novo.categoria);
        return;
    }

    printf("Dias de permanência: ");
    scanf("%d", &novo.dias);

    novo.quarto = quartos[indiceQuarto].num;
    quartos[indiceQuarto].status = 'O'; // Marcar como ocupado

    // Alocar dinamicamente espaço para o novo hóspede
    *hospedes = realloc(*h                          ospedes, (*totalHospedes + 1) * sizeof(Hospede));
    (*hospedes)[*totalHospedes] = novo;
    (*totalHospedes)++;

    printf("Check-in realizado com sucesso! Quarto %d atribuído.\n", novo.quarto);
}

// Função para fazer check-out
void checkOut(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    int numQuarto;
    printf("Número do quarto para check-out: ");
    scanf("%d", &numQuarto);

    int encontrado = -1;
    for (int i = 0; i < *totalHospedes; i++) {
        if ((*hospedes)[i].quarto == numQuarto) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Nenhum hóspede encontrado no quarto %d.\n", numQuarto);
        return;
    }

    Hospede h = (*hospedes)[encontrado];
    float valorDiaria = (h.categoria == 'S') ? 85.0 : 65.0;
    float total = valorDiaria * (h.acompanhantes + 1) * h.dias;

    printf("\n--- Relatório de Check-out ---\n");
    printf("Nome: %s\n", h.nome);
    printf("Quarto: %d\n", h.quarto);
    printf("Categoria: %c\n", h.categoria);
    printf("Acompanhantes: %d\n", h.acompanhantes);
    printf("Dias: %d\n", h.dias);
    printf("Total a pagar: R$ %.2f\n", total);

    // Atualizar o quarto para "Livre"
    for (int i = 0; i < totalQuartos; i++) {
        if (quartos[i].num == h.quarto) {
            quartos[i].status = 'L';
            break;
        }
    }

    // Remover o hóspede da lista
    for (int i = encontrado; i < *totalHospedes - 1; i++) {
        (*hospedes)[i] = (*hospedes)[i + 1];
    }
    (*hospedes) = realloc(*hospedes, (*totalHospedes - 1) * sizeof(Hospede));
    (*totalHospedes)--;
}

// Função principal
int main() {
    Quarto quartos[15];
    Hospede *hospedes = NULL;
    int totalHospedes = 0;

    inicializarQuartos(quartos, 15);

    int opcao;
    do {
        printf("\n--- Controle de Hotel ---\n");
        printf("[1] Check-in\n");
        printf("[2] Check-out\n");
        printf("[3] Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                checkIn(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 2:
                checkOut(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    // Liberar memória alocada
    free(hospedes);
    return 0;
}

    novo.quarto = quartos[indiceQuarto].num;
    quartos[indiceQuarto].status = 'O'; // Marcar como ocupado

    // Alocar dinamicamente espaço para o novo hóspede
    *hospedes = realloc(*hospedes, (*totalHospedes + 1) * sizeof(Hospede));
    (*hospedes)[*totalHospedes] = novo;
    (*totalHospedes)++;

    printf("Check-in realizado com sucesso! Quarto %d atribuído.\n", novo.quarto);
}

// Função para fazer check-out
void checkOut(Hospede **hospedes, int *totalHospedes, Quarto *quartos, int totalQuartos) {
    int numQuarto;
    printf("Número do quarto para check-out: ");
    scanf("%d", &numQuarto);

    int encontrado = -1;
    for (int i = 0; i < *totalHospedes; i++) {
        if ((*hospedes)[i].quarto == numQuarto) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Nenhum hóspede encontrado no quarto %d.\n", numQuarto);
        return;
    }

    Hospede h = (*hospedes)[encontrado];
    float valorDiaria = (h.categoria == 'S') ? 85.0 : 65.0;
    float total = valorDiaria * (h.acompanhantes + 1) * h.dias;

    printf("\n--- Relatório de Check-out ---\n");
    printf("Nome: %s\n", h.nome);
    printf("Quarto: %d\n", h.quarto);
    printf("Categoria: %c\n", h.categoria);
    printf("Acompanhantes: %d\n", h.acompanhantes);
    printf("Dias: %d\n", h.dias);
    printf("Total a pagar: R$ %.2f\n", total);

    // Atualizar o quarto para "Livre"
    for (int i = 0; i < totalQuartos; i++) {
        if (quartos[i].num == h.quarto) {
            quartos[i].status = 'L';
            break;
        }
    }

    // Remover o hóspede da lista
    for (int i = encontrado; i < *totalHospedes - 1; i++) {
        (*hospedes)[i] = (*hospedes)[i + 1];
    }
    (*hospedes) = realloc(*hospedes, (*totalHospedes - 1) * sizeof(Hospede));
    (*totalHospedes)--;
}

// Função principal
int main() {
    Quarto quartos[15];
    Hospede *hospedes = NULL;
    int totalHospedes = 0;

    inicializarQuartos(quartos, 15);

    int opcao;
    do {
        printf("\n--- Controle de Hotel ---\n");
        printf("[1] Check-in\n");
        printf("[2] Check-out\n");
        printf("[3] Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                checkIn(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 2:
                checkOut(&hospedes, &totalHospedes, quartos, 15);
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    // Liberar memória alocada
    free(hospedes);
    return 0;
}

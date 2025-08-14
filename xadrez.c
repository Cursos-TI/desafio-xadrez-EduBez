#include <stdio.h>

/*
  --------------------
  NÍVEL NOVATO
  --------------------
*/

// Funções para movimentar as peças do nível Novato
void moverBispoNovato() {
    printf("--- Movimentação do Bispo (Nível Novato) ---\n");
    // Movimentação do bispo na diagonal superior direita
    // Usa uma combinação de "Cima" e "Direita"
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n");
    }
    printf("-------------------------------------------\n\n");
}

void moverTorreNovato() {
    printf("--- Movimentação da Torre (Nível Novato) ---\n");
    // Movimentação da torre 5 casas para a direita
    int i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }
    printf("-------------------------------------------\n\n");
}

void moverRainhaNovato() {
    printf("--- Movimentação da Rainha (Nível Novato) ---\n");
    // Movimentação da rainha 8 casas para a esquerda
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("--------------------------------------------\n\n");
}

/*
  --------------------
  NÍVEL AVENTUREIRO
  --------------------
*/

void moverCavaloAventureiro() {
    printf("--- Movimentação do Cavalo (Nível Aventureiro) ---\n");
    // Movimentação do cavalo em L (para baixo e para a esquerda)
    // Usa loops aninhados: um loop 'for' e um loop 'while'
    printf("Movendo 2 casas para baixo e 1 para a esquerda:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
    printf("--------------------------------------------------\n\n");
}

/*
  --------------------
  NÍVEL MESTRE
  --------------------
*/

// Funções recursivas para as peças do nível Mestre
void moverBispoMestre(int movimentosRestantes) {
    printf("--- Movimentação do Bispo (Nível Mestre) ---\n");
    // Movimentação do bispo na diagonal superior direita com recursão
    if (movimentosRestantes > 0) {
        printf("Cima, Direita\n");
        moverBispoMestre(movimentosRestantes - 1);
    }
    printf("--------------------------------------------\n\n");
}

void moverTorreMestre(int movimentosRestantes) {
    printf("--- Movimentação da Torre (Nível Mestre) ---\n");
    // Movimentação da torre para a direita com recursão
    if (movimentosRestantes > 0) {
        printf("Direita\n");
        moverTorreMestre(movimentosRestantes - 1);
    }
    printf("-------------------------------------------\n\n");
}

void moverRainhaMestre(int movimentosRestantes) {
    printf("--- Movimentação da Rainha (Nível Mestre) ---\n");
    // Movimentação da rainha para a esquerda com recursão
    if (movimentosRestantes > 0) {
        printf("Esquerda\n");
        moverRainhaMestre(movimentosRestantes - 1);
    }
    printf("---------------------------------------------\n\n");
}

void moverCavaloMestre() {
    printf("--- Movimentação do Cavalo (Nível Mestre) ---\n");
    // Movimentação do cavalo em L (1 vez para cima à direita)
    // Usa um loop 'for' com múltiplas variáveis e condições
    for (int i = 0, j = 0; i < 1 || j < 2; i++, j++) {
        if (i < 1) {
            printf("Cima\n");
        }
        if (j < 2) {
            printf("Direita\n");
        }
    }
    printf("---------------------------------------------\n\n");
}

int main() {
    printf("========== DESAFIO XADREZ - MATECHECK ==========\n\n");
    
    // Execução do Nível Novato
    moverBispoNovato();
    moverTorreNovato();
    moverRainhaNovato();

    // Execução do Nível Aventureiro
    moverCavaloAventureiro();

    // Execução do Nível Mestre
    moverBispoMestre(5);
    moverTorreMestre(5);
    moverRainhaMestre(8);
    moverCavaloMestre();
    
    return 0;
}

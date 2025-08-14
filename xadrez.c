#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    // --- Simulação do movimento do Bispo (usando 'while') ---
    printf("--- Movimento do Bispo ---\n");
    printf("Movendo 5 casas na diagonal (cima e direita).\n");
    int contador_bispo = 0;

    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // --- Simulação do movimento da Torre (usando 'for') ---
    printf("--- Movimento da Torre ---\n");
    printf("Movendo 5 casas para a direita.\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Simulação do movimento da Rainha (usando 'do-while') ---
    printf("--- Movimento da Rainha ---\n");
    printf("Movendo 8 casas para a esquerda.\n");
    int contador_rainha = 0;

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    return 0;
}

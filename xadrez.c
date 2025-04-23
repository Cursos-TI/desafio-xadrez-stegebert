#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Declarei quantas casas cada peça anda

   const int casas_bispo = 5;
   const int casas_torre = 5;
   const int casas_rainha = 8;

   int i = 0; // isso aqui é pra contar

    // Implementação de Movimentação do Bispo
    // Diagonal = Cima + Direita
    printf("Movimento do Bispo:\n");
    while (i < casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int j = 0; j < casas_torre; j++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

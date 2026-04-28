#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    //Declaração de variaveis 
    int i = 1, j = 1;
    int opcao;

    //Menu de Movimentação das Peças
    printf("# Proxima jogada\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    // Implementação de Movimentação do Bispo
    // Mover o Bispo na diagonal 5 casas para cima e à direita usando while.
    case 1:
        printf("Você escolheu Bispo!\n");
        
        while (i <= 5)
        {
            i ++;
            printf("%d° Casa: ", i);
            printf("Cima e direita\n");
        }
        break;
    
    // Implementação de Movimentação da Torre
    // Mover a Torre 5 casas para a direita usando o for
    case 2: 
        printf("Você escolheu Torre!\n");
        
        for (i = 1; i <= 5; i++)
        {
            printf("%d° Casa: ", i);
            printf("Direita\n");
        }
        break;
    
    // Implementação de Movimentação da Rainha
    // Mover a Rainha oito casas para a esquerda usando do while.
    case 3:
        printf("Você escolheu Rainha!\n");
        
        do
        {
            printf("%d° Casa: ",i);
            printf("Esquerda\n");
            i++;
        } while (i <= 8);
        
        break;
    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    case 4:
    printf("Você escolheu o Cavalo!\n");
    for (i = 1; i <= 1; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("%d° Casa: ", j);
            printf("Cima\n");
        }
        printf("%d° Casa: ", j);
        printf("Direita\n");
    }
        break;
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Caso o usuario digite um número não registrado
    default:
        printf("Opção Invalida!");
        break;
    }
    return 0;
}
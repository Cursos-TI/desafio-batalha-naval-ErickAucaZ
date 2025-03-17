#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[10][10]; // criação da matriz de uma escala 10x10.

    printf(" //// TABELA BATALHA NAVAL //// \n\n"); // apenas o título do tema.

    for(int i = 0; i < 10; i++){ // inicialização do tabuleiro com apenas 0s.
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0; // aqui pode-se ver que o valor foi definido em zero na matriz.
        }
    }

    int linhah = 2;
    int colunah = 2;
    for(int i = 0; i < 3; i++){ //definição do navio horizontal no tabuleiro, que está sendo representado pelo número 3.
        tabuleiro[linhah][colunah + i] = 3;
    }

    int linhav = 6;
    int colunav = 7;
    for(int i = 0; i < 3; i++){ //difinição do navio vertical no tabuleiro, que também está sendo representado pelo número 3.
        tabuleiro[linhav + i][colunav] = 3;
    }

    printf("    A  B  C  D  E  F  G  H  I  J   \n"); // apenas uma marcação para as colunas no tabuleiro.

    for(int i = 0; i < 10; i++){ // inicialização do tabuleiro com todas as informações passadas.
        printf("%2d| ", i + 1); // marcação das linhas no tabuleiro, so que usando números de 1 a 10.

        for(int j = 0; j < 10; j++){ //este loop, imprime cada linha do tabuleiro
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n"); // um printf para que as linhas fiquem organizadas no terminal.
    }

    return 0;
}
#include <stdio.h>

#define tamanho 10 //uma constate fixa.

    void iniciartabuleiro(int tabuleiro[tamanho][tamanho]){ //inicializa o tabuleiro 10x10 com valores 0.
    for(int i = 0; i < tamanho; i++){ // loops aninhados.
        for(int j = 0; j < tamanho; j++){
            tabuleiro[i][j] = 0;
        }
    }
    }

    void naviohorizontal(int tabuleiro[tamanho][tamanho], int linha, int coluna){ //Cria o navio horizontal no tabuleiro
    for(int i = 0; i < 3; i++){
        tabuleiro[linha][coluna + i] = 3;
    }
    }

    void naviorvertical(int tabuleiro[tamanho][tamanho], int linha, int coluna){ //cria o navio vertical no tabuleiro
    for(int i = 0; i < 3; i++){
        tabuleiro[linha + i][coluna] = 3;
    }
    }

    void desenharoctaedro(int tabuleiro[tamanho][tamanho]){ //Cria o desenho do octaedro no tabuleiro.
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if((i == 5 && j == 7) ||(i == 6 && (j == 6 || j == 7 || j == 8)) || // Utiliza-se uma estrutura de condições para "pintar" o octaedro no tabuleiro de acordo com as posições.
                (i == 7 && (j == 5 || j == 6 || j == 7 || j == 8 || j == 9)) ||
                (i == 8 && (j == 6 || j == 7 || j == 8)) || (i == 9 && j == 7)) {
                tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void desenharcone(int tabuleiro[tamanho][tamanho]){ //Cria o desenho do cone no tabuleiro.
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if ((i == 1 && j == 7) || // Também se utiliza uma estrutura de condições para imprimir o cone no tabuleiro.
                (i == 2 && (j == 6 || j == 7 || j == 8)) ||
                (i == 3 && (j == 5 || j == 6 || j == 7 || j == 8 || j == 9))){
                    tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void desenharcruz(int tabuleiro[tamanho][tamanho]){ //Cria o desenho da cruz no tabuleiro.
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
        if((i == 3 && j == 2) || (i == 4 && j == 2) || //O mesmo do octaedro e do cone, uma estrutura de condições.
            (i == 5 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4)) ||
            (i == 6 && j == 2) || (i == 7 && j == 2)){
                tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void imprimirtabuleiro(int tabuleiro[tamanho][tamanho]){ //Imprime o tabuleiro com todas as modificações realizadas no código sem entrada de um usuário.
    printf("    A  B  C  D  E  F  G  H  I  J   \n"); //Apenas uma forma de organizar as colunas para uma legibilidade melhor.
    for(int i = 0; i < tamanho; i++){
        printf("%2d|", i + 1); // Também uma forma de organizar, só que agora as linhas.
        for(int j = 0; j < tamanho; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");  
    }
    }

int main(){

    int tabuleiro[tamanho][tamanho]; // inicia a matriz do tabuleiro.
    int linha_h = 1, coluna_h = 1; // define onde o navio da horizontal estará.
    int linha_v = 4, coluna_v = 5; // define onde o navio vertical estará.

    iniciartabuleiro(tabuleiro); // inicia om tabuleiro com apenas zeros(0).
    
    naviohorizontal(tabuleiro, linha_h, coluna_h); // determina o navio horizontal.
    naviorvertical(tabuleiro, linha_v, coluna_v); //  determina o navio vertical.

    desenharoctaedro(tabuleiro); // Imprime o octaedro no tabuleiro.
    desenharcone(tabuleiro); // Imprime o cone no tabuleiro.
    desenharcruz(tabuleiro); // Imprime a cruz no tabuleiro.

    printf(" //// TABELA BATALHA NAVAL //// \n\n"); //Apenas um título para o tabuleiro, só por estética.
    imprimirtabuleiro(tabuleiro); // imprime o tabuleiro com todas as informações passadas no código anteriomente.
    
    return 0;
}
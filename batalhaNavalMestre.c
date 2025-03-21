#include <stdio.h>

#define tamanho 10

    void iniciartabuleiro(int tabuleiro[tamanho][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            tabuleiro[i][j] = 0;
        }
    }
    }

    void naviohorizontal(int tabuleiro[tamanho][tamanho], int linha, int coluna){
    for(int i = 0; i < 3; i++){
        tabuleiro[linha][coluna + i] = 3;
    }
    }

    void naviorvertical(int tabuleiro[tamanho][tamanho], int linha, int coluna){
    for(int i = 0; i < 3; i++){
        tabuleiro[linha + i][coluna] = 3;
    }
    }

    void desenharoctaedro(int tabuleiro[tamanho][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if((i == 5 && j == 7) ||(i == 6 && (j == 6 || j == 7 || j == 8)) ||
                (i == 7 && (j == 5 || j == 6 || j == 7 || j == 8 || j == 9)) ||
                (i == 8 && (j == 6 || j == 7 || j == 8)) || (i == 9 && j == 7)) {
                tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void desenharcone(int tabuleiro[tamanho][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if ((i == 1 && j == 7) ||
                (i == 2 && (j == 6 || j == 7 || j == 8)) ||
                (i == 3 && (j == 5 || j == 6 || j == 7 || j == 8 || j == 9))){
                    tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void desenharcruz(int tabuleiro[tamanho][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
        if((i == 3 && j == 2) || (i == 4 && j == 2) ||
            (i == 5 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4)) ||
            (i == 6 && j == 2) || (i == 7 && j == 2)){
                tabuleiro[i][j] = 5;
            }
        }
    }
    }

    void imprimirtabuleiro(int tabuleiro[tamanho][tamanho]){
    printf("    A  B  C  D  E  F  G  H  I  J   \n");
    for(int i = 0; i < tamanho; i++){
        printf("%2d|", i + 1);
        for(int j = 0; j < tamanho; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");  
    }
    }

int main(){

    int tabuleiro[tamanho][tamanho];
    int linha_h = 1, coluna_h = 1;
    int linha_v = 4, coluna_v = 5;

    iniciartabuleiro(tabuleiro);
    
    naviohorizontal(tabuleiro, linha_h, coluna_h);
    naviorvertical(tabuleiro, linha_v, coluna_v);

    desenharoctaedro(tabuleiro);
    desenharcone(tabuleiro);
    desenharcruz(tabuleiro);

    printf(" //// TABELA BATALHA NAVAL //// \n\n");
    imprimirtabuleiro(tabuleiro);
    
    return 0;
}
#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;
    printf("Diagonal (%d, %d)\n", x, y);
    moverBispo(casas - 1, x + 1, y + 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Movimentação do Cavalo com loops complexos
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Cima\n");
            } else {
                printf("Cima\nDireita\n");
            }
        }
    }
}

int main() {
    int casas = 3; // Número de casas a serem percorridas
    
    printf("Movimento da Torre:\n");
    moverTorre(casas, "Cima");
    printf("\n");
    
    printf("Movimento do Bispo:\n");
    moverBispo(casas, 1, 1);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    moverRainha(casas, "Direita");
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    moverCavalo(3);
    
    return 0;
}

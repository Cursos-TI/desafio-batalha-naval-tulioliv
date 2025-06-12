#include <stdio.h>

int main() {
    // Declaração do tabuleiro 5x5 (inicializado com 0)
    int tabuleiro[5][5] = {0};

    // Configuração do navio vertical
    // O navio vertical terá 3 partes, posicionado fixando a coluna e incrementando a linha.
    int tamanhoVertical = 3;
    int inicioVerticalX = 1; // Coluna fixa
    int inicioVerticalY = 0; // Linha de partida

    printf("Navio Vertical:\n");
    for (int i = 0; i < tamanhoVertical; i++) 
        {
        int x = inicioVerticalX;
        int y = inicioVerticalY + i;
        if (y < 5) { // Verifica se a posição está dentro dos limites do tabuleiro
            tabuleiro[y][x] = 1;  // Marca a posição ocupada pelo navio
            printf("Parte %d: Coordenada (%d, %d)\n", i + 1, x, y);
        }
    }

    printf("\n");

    // Configuração do navio horizontal
    // O navio horizontal terá 3 partes, posicionado fixando a linha e incrementando a coluna.
    int tamanhoHorizontal = 3;
    int inicioHorizontalX = 2; // Coluna inicial
    int inicioHorizontalY = 3; // Linha fixa

    printf("Navio Horizontal:\n");
    for (int i = 0; i < tamanhoHorizontal; i++) 
        {
        int x = inicioHorizontalX + i;
        int y = inicioHorizontalY;
        if (x < 5) { // Verifica se a posição está dentro dos limites do tabuleiro
            tabuleiro[y][x] = 2;  // Marca a posição ocupada pelo navio (valor diferente para diferenciar)
            printf("Parte %d: Coordenada (%d, %d)\n", i + 1, x, y);
        }
    }

    return 0;
}
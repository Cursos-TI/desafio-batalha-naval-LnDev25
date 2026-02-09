#include <stdio.h>
#include <stdlib.h>

#define TAM_TABULEIRO 10

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // 1. Inicializa o tabuleiro com 0 (Água)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento dos Navios (Nível Aventureiro)
    for (int i = 0; i < 3; i++) {
        tabuleiro[0][2 + i] = 3;             // Horizontal
        tabuleiro[5 + i][5] = 3;             // Vertical
        tabuleiro[1 + i][1 + i] = 3;         // Diagonal 1
        tabuleiro[7 + i][8 - i] = 3;         // Diagonal 2
    }

    // 3. Definição das Matrizes de Habilidade (5x5)
    int matrizCruz[5][5], matrizOctaedro[5][5], matrizCone[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Lógica Cruz
            matrizCruz[i][j] = (i == 2 || j == 2) ? 1 : 0;
            // Lógica Octaedro
            matrizOctaedro[i][j] = (abs(i - 2) + abs(j - 2) <= 2) ? 1 : 0;
            // Lógica Cone
            matrizCone[i][j] = (i < 3 && j >= (2 - i) && j <= (2 + i)) ? 1 : 0;
        }
    }

    // 4. Sobreposição das Habilidades no Tabuleiro
    // Usamos as mesmas variáveis 'oL' e 'oC' apenas mudando os valores
    int oL, oC; 

    // Carimbando a Cruz
    oL = 2; oC = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int nL = oL + i - 2, nC = oC + j - 2;
            if (nL >= 0 && nL < 10 && nC >= 0 && nC < 10 && matrizCruz[i][j] == 1) 
                tabuleiro[nL][nC] = 5;
        }
    }

    // Carimbando o Cone
    oL = 5; oC = 8; // Mudei a coluna para não sobrepor tudo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int nL = oL + i - 2, nC = oC + j - 2;
            if (nL >= 0 && nL < 10 && nC >= 0 && nC < 10 && matrizCone[i][j] == 1) 
                tabuleiro[nL][nC] = 5;
        }
    }

    // Carimbando o Octaedro
    oL = 8; oC = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int nL = oL + i - 2, nC = oC + j - 2;
            if (nL >= 0 && nL < 10 && nC >= 0 && nC < 10 && matrizOctaedro[i][j] == 1) 
                tabuleiro[nL][nC] = 5;
        }
    }

    // 5. Exibição Final Estilizada
    printf("\n--- BATALHA NAVAL: NÍVEL MESTRE ---\n");
    printf("Legenda: . (Água) | N (Navio) | X (Habilidade)\n\n");

    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            if (tabuleiro[linha][coluna] == 3) {
                printf("N ");
            } else if (tabuleiro[linha][coluna] == 5) {
                printf("X ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }

    return 0;
}
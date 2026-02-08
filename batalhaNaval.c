#include <stdio.h>


// INICIO DO PROGRAMA - NÍVEL NOVATO - TEMA 5


// Definindo uma constante para o tamanho do tabuleiro
#define TAM_TABULEIRO 10

int main() {

   int tabuleiro [TAM_TABULEIRO] [TAM_TABULEIRO];

   for (int agua = 0; agua < TAM_TABULEIRO; agua ++) {

    for (int agua2 = 0; agua2 < TAM_TABULEIRO; agua2 ++) {

        tabuleiro [agua] [agua2] = 0 ;
    }

   }



   // INICIO DO PROGRAMA - NÍVEL AVENTUREIRO - TEMA 5


   // Posicionando o Navio Diagonal 1
   for (int posicao_diagonal1 = 0; posicao_diagonal1 < 3; posicao_diagonal1 ++) {

    tabuleiro [1 + posicao_diagonal1] [1 + posicao_diagonal1] = 3;

   }

   
   // Posicionando o Navio Diagonal 2
   for (int posicao_diagonal2 = 0; posicao_diagonal2 < 3; posicao_diagonal2 ++) {

    tabuleiro [7 + posicao_diagonal2] [8 - posicao_diagonal2] = 3;
    
   }

   
   // FIM DO PROGRAMA - NÍVEL AVENTUREIRO - TEMA 5
   


   // Posicionando o Navio Horizontal
   for (int posicao_horizontal = 0; posicao_horizontal < 3; posicao_horizontal ++) {

    tabuleiro [0] [2 + posicao_horizontal] = 3 ;

   }


   // Posicionando o Navio Vertical
   for (int posicao_vertical = 0; posicao_vertical < 3; posicao_vertical ++) {

    tabuleiro [5 + posicao_vertical] [5] = 3 ;

   }


    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("\n--- Batalha Naval (Nível Aventureiro) ---\n\n");

    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {

        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {

            printf("%d ", tabuleiro[linha][coluna]);

        }

        printf("\n"); 

    }


   // FIM DO PROGRAMA - NÍVEL NOVATO - TEMA 5

   
   return 0;

}

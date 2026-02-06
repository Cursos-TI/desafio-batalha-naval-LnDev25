#include <stdio.h>

int main() {


   // INICIO DO PROGRAMA - NÍVEL NOVATO - TEMA 5


   // Tamanho do Tabuleiro 
   int tabuleiro [10] [10];

   for (int agua = 0; agua < 10; agua ++) {

    for (int agua2 = 0; agua2 < 10; agua2 ++) {

        tabuleiro [agua] [agua2] = 0 ;
    }

   }


   // Tamanho dos navios
   int navio_horizontal [3] = {3, 3, 3} ;
   int navio_vertical [3] = {3, 3, 3} ;


   // Posicionando o Navio Horizontal
   for (int posicao_horizontal = 0; posicao_horizontal < 3; posicao_horizontal ++) {

    tabuleiro [2] [2 + posicao_horizontal] = navio_horizontal[posicao_horizontal];

   }


   // Posicionando o Navio Vertical
   for (int posicao_vertical = 0; posicao_vertical < 3; posicao_vertical ++) {

    tabuleiro [5 + posicao_vertical] [5] = navio_vertical [posicao_vertical];

   }


   // Exibindo o Tabuleiro Completo
   printf("\n--- Batalha Naval ---\n");

   for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {

        printf("%d ", tabuleiro[linha][coluna]);
    }
   
    printf("\n"); 
}


   // FIM DO PROGRAMA - NÍVEL NOVATO - TEMA 5

   
   return 0;
}

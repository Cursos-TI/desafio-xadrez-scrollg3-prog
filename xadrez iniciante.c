#include <stdio.h>

int main() {
    // Constantes de movimentos
    const int BISPO_MOV = 5;   // O Bispo anda 5 casas na diagonal
    const int TORRE_MOV = 5;   // A Torre anda 5 casas para a direita
    const int RAINHA_MOV = 8;  // A Rainha anda 8 casas para a esquerda

    int i; // variável de controle do loop

    // -------------------------------
    // Movimento do BISPO
    // Usaremos "for" porque sabemos o número exato de repetições
    // O bispo anda na diagonal superior direita, que é uma combinação
    // de "Cima" e "Direita" para cada casa.
    // -------------------------------
    printf("Movimento do Bispo:\n");
    for(i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n"); // Apenas para separar a saída

    // -------------------------------
    // Movimento da TORRE
    // Usaremos "while"
    // A torre anda 5 casas apenas para a direita
    // -------------------------------
    printf("Movimento da Torre:\n");
    i = 0;
    while(i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    printf("\n"); // Apenas para separar a saída

    // -------------------------------
    // Movimento da RAINHA
    // Usarei "do...while"
    // A rainha anda 8 casas para a esquerda
    // -------------------------------
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < RAINHA_MOV);

    return 0;
}

#include <stdio.h>

int main() {
    // Constantes para os movimentos do cavalo
    const int MOV_BAIXO = 2;   // O cavalo anda 2 casas para baixo
    const int MOV_ESQUERDA = 1; // O cavalo anda 1 casa para a esquerda

    int i, j; // variáveis de controle

    printf("Movimento do Cavalo em L:\n");

    // Loop principal (usando for) para representar o movimento em L
    for(i = 0; i < 1; i++) { // apenas um "L", mas pode repetir mais se quiser
        
        // Primeiro movimento: duas casas para baixo
        for(j = 0; j < MOV_BAIXO; j++) {
            printf("Baixo\n");
        }

        // Segundo movimento: uma casa para a esquerda
        j = 0;
        while(j < MOV_ESQUERDA) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}

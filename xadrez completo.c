#include <stdio.h>

// ====================================================================
// NÍVEL NOVATO
// Estruturas de repetição simples (for, while, do...while)
// ====================================================================

void nivelNovato() {
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;
    int i;

    printf("===== NÍVEL NOVATO =====\n");

    // Bispo: 5 casas na diagonal (Cima + Direita) usando FOR
    printf("Movimento do Bispo (for):\n");
    for(i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Torre: 5 casas para a direita usando WHILE
    printf("Movimento da Torre (while):\n");
    i = 0;
    while(i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda usando DO...WHILE
    printf("Movimento da Rainha (do...while):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < RAINHA_MOV);
    printf("\n");
}

// ====================================================================
// NÍVEL AVENTUREIRO
// Loops aninhados para o movimento do cavalo
// ====================================================================

void nivelAventureiro() {
    const int MOV_BAIXO = 2;
    const int MOV_ESQUERDA = 1;
    int i, j;

    printf("===== NÍVEL AVENTUREIRO =====\n");
    printf("Movimento do Cavalo em L (loops aninhados):\n");

    // Um L: 2 para baixo + 1 para a esquerda
    for(i = 0; i < 1; i++) { // pode repetir mais de um L se quiser
        for(j = 0; j < MOV_BAIXO; j++) {
            printf("Baixo\n");
        }
        j = 0;
        while(j < MOV_ESQUERDA) {
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");
}

// ====================================================================
// NÍVEL MESTRE
// Funções recursivas e cavalo com múltiplas variáveis, continue e break
// ====================================================================

// Bispo (recursivo + loop aninhado)
void moverBispo(int movimentos) {
    if(movimentos == 0) return;
    for(int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    moverBispo(movimentos - 1);
}

// Torre (recursivo)
void moverTorre(int movimentos) {
    if(movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Rainha (recursivo)
void moverRainha(int movimentos) {
    if(movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Cavalo (loops múltiplos + continue + break)
void moverCavalo() {
    printf("Movimento do Cavalo em L:\n");
    for(int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
        if(i < 2) {
            printf("Cima\n");
            continue;
        }
        if(i == 2) {
            printf("Direita\n");
            break;
        }
    }
}

void nivelMestre() {
    printf("===== NÍVEL MESTRE =====\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Torre (recursivo):\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(8);
    printf("\n");

    moverCavalo();
    printf("\n");
}

// ====================================================================
// MAIN
// ====================================================================

int main() {
    nivelNovato();       // Parte 1
    nivelAventureiro();  // Parte 2
    nivelMestre();       // Parte 3
    return 0;
}

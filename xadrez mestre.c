#include <stdio.h>

// ------------------------------
// Funções Recursivas
// ------------------------------

// Movimento do Bispo (5 vezes diagonal: Cima + Direita)
// Usando recursão + loop aninhado
void moverBispo(int movimentos) {
    if(movimentos == 0) return; // Caso base (parar)
    
    // Movimento diagonal: um "Cima" e um "Direita"
    for(int i = 0; i < 1; i++) { 
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(movimentos - 1); // Chamada recursiva
}

// Movimento da Torre (5 vezes Direita)
void moverTorre(int movimentos) {
    if(movimentos == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(movimentos - 1); // Chamada recursiva
}

// Movimento da Rainha (8 vezes Esquerda)
void moverRainha(int movimentos) {
    if(movimentos == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(movimentos - 1); // Chamada recursiva
}

// ------------------------------
// Movimento do Cavalo
// ------------------------------
// Cavalo faz movimento em L: 2 casas para cima + 1 casa para direita
// Usando loops com múltiplas variáveis, break e continue
void moverCavalo() {
    printf("Movimento do Cavalo em L:\n");

    // Laço com múltiplas variáveis e condições
    for(int i = 0, j = 0; i < 3 && j < 3; i++, j++) {

        if(i < 2) { // Primeiros dois movimentos: "Cima"
            printf("Cima\n");
            continue; // pula direto para o próximo movimento
        }

        if(i == 2) { // No terceiro movimento: "Direita"
            printf("Direita\n");
            break; // encerra o loop após completar o L
        }
    }
}

// ------------------------------
// Programa Principal
// ------------------------------
int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\n");
    moverCavalo();

    return 0;
}

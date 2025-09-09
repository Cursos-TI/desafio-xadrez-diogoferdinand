
#include <stdio.h>



int main() {
    // Constantes para definir o número de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;
    const int CAVALO_MOV_ESQUERDA = 1;
    const int CAVALO_MOV_BAIXO = 2;

    int i; // variável de controle para os loops
    int K = 0; // controle do while


    // ---------------- Bispo ----------------
    printf("Bispo:\n");
    for(i = 0; i < BISPO_MOV; i++) {
        printf("Cima Direita\n");
    }

    // ---------------- Torre ----------------
    printf("\nTorre:\n");
    for(i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // ---------------- Rainha ----------------
    printf("\nRainha:\n");
    for(i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    printf("\n");

    printf("Movimento do Cavalo:\n");

    //repetiNndo 3 movimentos em L
    for(int l = 0; l < 3; l++) {
        printf("Movimento %d:\n", l+1);

        //parte vertical baixo
        for(int j = 0; j < CAVALO_MOV_BAIXO; j++) {
            printf("Baixo\n");
        }

        //parte horizontal esquerda
        int i = 0;
        while(i < CAVALO_MOV_ESQUERDA) {
            printf("Esquerda\n");
            i++;
        }
        printf("\n");
    }

    return 0;
}
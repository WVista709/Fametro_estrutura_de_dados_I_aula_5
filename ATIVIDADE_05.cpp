#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM], vetor[TAM], resultado[TAM][TAM];

	printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

	for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	
    printf("Digite os elementos do vetor de tamanho 3:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz[i][j] + vetor[i];
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main(){
	int N =4, matriz[N][N], valor, soma;
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("Digite o valor da matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (int i = 0; i < N; i++){
		soma = 0;
		for (int j = 0; j < N; j++){
				soma += matriz[i][j];
		}
		printf("Linha [%d]: %d\n", i + 1, soma);
	}
	
	
	return 0;
}

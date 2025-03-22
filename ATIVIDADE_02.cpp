#include <stdio.h>

int main(){
	int matriz_01[3][3], matriz_02[3][3], matriz_03[3][3], valor;
	
	printf("Primeira matriz.\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Digite a matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz_01[i][j]);
		}
	}
	
	printf("Segunda matriz.\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Digite a matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz_02[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matriz_03[i][j] = 0;
		}
	}
	

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				matriz_03[i][j] += matriz_01[i][k] * matriz_02[k][j];
			}
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("matriz[%d][%d]: %d\n", i + 1, j + 1, matriz_03[i][j]);
		}
	}
	
	return 0;
}

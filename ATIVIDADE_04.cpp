#include <stdio.h>

int main(){
	int tam, soma;
	
	printf("Digite o valor da matriz: ");
	scanf("%d", &tam);
	
	int m1[tam][tam], m2[tam][tam];
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			printf("Matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &m1[i][j]);
		}
	}
	
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			printf("Matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("Diagonal principal: ");
	for (int i = 0; i < tam; i++){
		printf(" %d ", m1[i][i]);
		printf(" %d ", m2[i][i]);
	}
	
	printf("\n");
	
	printf("Diagonal secundaria: ");
	for (int i = 0; i < tam; i++){
		printf(" %d ", m1[i][tam - i - 1]);
		printf(" %d ", m2[i][tam - i - 1]);
		
		soma += m1[i][tam - i - 1] * m2[i][tam - i - 1];
	}
	
	printf("multiplicacao diagonal: %d", soma);
	
	return 0;
}

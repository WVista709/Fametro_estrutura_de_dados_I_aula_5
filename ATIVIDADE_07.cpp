#include <stdio.h>

int main(){
	int tam; 
	char matriz[tam][tam], p1, p2;
	
	printf("Digite o tamanho do jogo: ");
	scanf("%d", &tam);
	
	for (int i = 0; i <  tam; i++){
		for (int j = 0; j < tam; j++){
			matriz[i][j] = ' ';
		}
	}
	
	for (int i = 0; i <  tam; i++){
		for (int j = 0; j < tam; j++){
			if (j < tam) printf("|");
		}
		printf("\n");
	}
}

#include <stdio.h>

int main(){
	int linha, coluna;
	char matriz[3][3];
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = ' ';
        }
    }
	
	do {
		
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){	
				printf(" %c ", matriz[i][j]);
				
				if (j < 2) printf("|");
			}
			printf("\n");
			
			if (i < 2) printf("---+---+---\n");
		}
		
		printf("Digite a linha: ");
		scanf("%d", &linha);
		
		printf("Digite a coluna: ");
		scanf("%d", &coluna);
		
		if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3){
			if (matriz[linha][coluna] == ' '){
				matriz[linha][coluna] = 'X';
			} else {
				printf("Posicao ocupada.\n");
			}
		} else {
			printf("Posição invalida.\n");
		}
		
	} while(1);
	
	return 0;

}

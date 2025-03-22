#include <stdio.h>

int main(){
	int tam, vetor[tam], valor, maior, menor;
	
	printf("Digite o tamnho do vetor: ");
	scanf("%d", &tam);
	
	menor = 1000;
	
	for(int i = 0; i < tam; i++){
		printf("Digite o vetor[%d]: ", i + 1);
		scanf("%d", &vetor[i]);
		
		if (vetor[i] > maior){maior = vetor[i];}
		if (vetor[i] < menor){menor = vetor[i];}
	}
	
	printf("Maior valor: %d\n", maior);
	printf("Menor valor: %d", menor);
	
	return 0;
}

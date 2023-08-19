#include <stdio.h>


int main () {
	int vet[100], i, n, soma = 0;
	
	printf("Digite o valor de N (Limite de 100): ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Digite o valor de vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < n; i++){
		soma += vet[i];
	}
	printf("Soma = %d.", soma);
	
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int gerarAleatorio (){
	 int numAleatorio = rand() % 6 + 1;
	 return numAleatorio;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int n, i, vet[6] = {0}, num;
	
	printf("Digite o número de vezes que o dado foi lançado: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		num = gerarAleatorio();
		vet[num - 1] = vet[num - 1] + 1;
		printf("%d | ", num);
	}
	
	printf("\n");
	
	for(i = 0; i < 6; i++)
		printf("Face %d: %d.\n", i + 1, vet[i]);
	
	return 0;
}

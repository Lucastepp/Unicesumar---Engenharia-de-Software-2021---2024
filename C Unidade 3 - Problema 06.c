#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	float salario, maior_salario, soma_salario, media_salario;
	int filhos, soma_filhos, numero_pessoas, media_filhos;
	
	numero_pessoas = 0;
	soma_filhos = 0;
	soma_salario = 0;
	maior_salario = 0;
	
	printf("Informe o salario:\n");
	scanf("%f", &salario);
	fflush(stdin);
	
	while(salario != -1){
		printf("Informe o numero de filhos:\n");
		scanf("%d", &filhos);
		fflush(stdin);
		numero_pessoas++;
		
		if (salario > maior_salario){
			maior_salario = salario;
		}
		
		soma_filhos = soma_filhos + filhos;
		soma_salario = soma_salario + salario;
		
		printf("Informe o salario:\n");
		scanf("%f", &salario);
		
		fflush(stdin);
		
	}
	
	media_salario = soma_salario / numero_pessoas;
	media_filhos =  soma_filhos / numero_pessoas;
	
	printf("A media de salarios e: %.2f\n ", media_salario);
	printf("A media de filhos e: %d \n ", media_filhos);
	printf("O maior salario e: %.2f\n", maior_salario);
	
	
	return 0;
}

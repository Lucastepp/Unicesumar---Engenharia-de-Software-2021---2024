#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int idade = 0, pessoas;
	int soma_idade = 0;
	float soma_altura = 0;
	float altura;

	
	
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	while(idade != 0){
		
		printf("Digite a sua altura: \n");
		scanf("%f", &altura);
		
		pessoas++;
		
		soma_idade = soma_idade + idade;
		soma_altura = soma_altura + altura;
		
		printf("Digite a sua idade: \n");
		scanf("%d", &idade);
		
			
	}
	
	
 	printf("A media de altura e de %.2f centimetros\n", soma_altura/pessoas);
 	
 	printf("A media de idade e de %d anos\n ", soma_idade/pessoas);
	
	
	return 0;
}

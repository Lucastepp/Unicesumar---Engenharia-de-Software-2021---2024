#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int idade;
	int counter_satis = 0;
	int counter_insatis = 0;
	int opiniao;
	int soma_idade = 0;
	
	
	printf("\n\nAjude-nos a melhorar, deixe sua opiniao:\n");
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
		
	while(idade != 0){
		
		
		printf("\nO que achou dos nossos servicos?\n\n");
		printf(" 1 - Satisfatorio\n 2 - Indiferente\n 3 - Insatisfatorio\n");
		scanf("%d", &opiniao);
	
		switch (opiniao){
		
			case 1:
				printf("Voce escolheu: Satisfatorio\n");
				soma_idade = soma_idade + idade;
				counter_satis++;
				break;
				
			case 2:
				printf("Voce escolheu: Indiferente\n");
				break;
				
			case 3:
				printf("Voce escolheu: Insatisfatorio\n");
				counter_insatis++;
				break;
			
			default:
				printf("Voce nao escolheu uma opcao valida.\n");
					
						
		}
	
	printf("Qual a sua idade?\n");
	scanf("\n%d", &idade);
	
	
	system("cls");	
		
	}
	
	printf("%d clientes responderam que o servico foi satisfatorio.\n", counter_satis);
	printf("A media de idade dos clientes que escolheram a opcao Satisfatorio foi de %d anos\n", soma_idade/counter_satis);
	printf("O numero de clientes que responderam insatisfatorio e de: %d\n", counter_insatis);
	
	
	
	return 0;
}

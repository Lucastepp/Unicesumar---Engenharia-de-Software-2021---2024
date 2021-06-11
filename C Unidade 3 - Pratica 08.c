#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	
	int idade, total_idade;
	int peso;
	char sexo;
	int casadas = 0;
	int solteiras = 0;
	int separadas = 0;
	int viuvas = 0;
	int estado_civil;
	int contador = 0;
	int total_peso = 0;
	
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	fflush(stdin);
	total_idade = total_idade + idade;
	
	
	do{
		
				
		printf("Qual e o seu peso? \n");
		scanf("%d", &peso);
		fflush(stdin);
		total_peso = total_peso + peso;
		
		
		printf("Qual e o seu sexo? \n");
		printf("Use M para Masculino e F para Feminino \n");
			
		scanf("%c", &sexo);
		fflush(stdin);
		
		
		if(sexo != 'F' && sexo != 'M'){
			printf("Voce digitou algo errado \n");
			printf("Use M para Masculino e F para Feminino \n");
			scanf("%c", &sexo);	
			fflush(stdin);
			
			}
		
		
				
		
		
		printf("Qual e o seu estado civil? \n\n");
		printf(" 1 - Casado(a) \n 2 - Solteiro(a)\n 3 - Separado(a)\n 4 - Viuvo(a)\n");
		scanf("%d", &estado_civil);
		fflush(stdin);
		
		switch(estado_civil){
			
			case 1:
				printf("Voce escolhe a opcao - Casado(a) \n");
				casadas++;
				
			break;
			
			case 2:
				printf("Voce escolhe a opcao - Solteiro(a) \n");
				solteiras++;
				
			break;
			
			
			case 3:
				printf("Voce escolhe a opcao - Separado(a) \n");
				separadas++;
				
				
			break;
			
			case 4:
				printf("Voce escolhe a opcao - Viuvo(a) \n");
				viuvas++;
			
				
			break;
		}
		
			
				
		
		
		fflush(stdin);
		contador++;
		
		printf("Qual a sua idade? \n");
		scanf("%d", &idade);
		fflush(stdin);
		total_idade = total_idade + idade;
		
				
	}while(idade != 0);
	
	printf("\nA media de idade dos participantes e de: %d\n", total_idade / contador);
	printf("A media de peso dos participantes e de: %d \n", total_peso / contador);
	
	printf("O total de participantes casados(as) e de: %d\n", casadas);
	printf("O total de participantes solteiros(as) e de: %d\n", solteiras);
	printf("O total de participantes separados(as) e de: %d\n", separadas);
	printf("O total de participantes viuvos(as) e de: %d\n", viuvas);
	
	
	
	return 0;
}

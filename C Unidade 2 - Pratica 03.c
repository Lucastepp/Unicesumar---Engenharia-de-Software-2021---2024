#include <stdio.h>
#include <stdlib.h>




int main() {
	
	int num;
	
	printf("Digite um numero de 1 a 12 para saber o mes correspondente!\n");
	scanf("%d", &num);
	
	if (num <= 0 || num > 12){
	printf("\nVoce digitou um numero que nao esta entre 1 e 12\n\n");
	printf("Reiniciando programa...\n");
	main();	
	}
	
	switch(num){
		
		case 1:
			printf("\nO mes %d e correspondente ao mes de Janeiro", num);
			break;
		
		case 2:
			printf("\nO mes %d e correspondente ao mes de Fevereiro", num);
			break;
		
		case 3:
			printf("\nO mes %d e correspondente ao mes de Marco", num);
			break;
		
		case 4:
			printf("\nO mes %d e correspondente ao mes de Abril", num);
			break;
		
		case 5:
			printf("\nO mes %d e correspondente ao mes de Maio", num);
			break;
		
		case 6:
			printf("\nO mes %d e correspondente ao mes de Junho", num);
			break;
		
		case 7:
			printf("\nO mes %d e correspondente ao mes de Julho", num);
			break;
		
		case 8:
			printf("\nO mes %d e correspondente ao mes de Agosto", num);
			break;
		
		case 9:
			printf("\nO mes %d e correspondente ao mes de Setembro", num);
			break;
		
		case 10:
			printf("\nO mes %d e correspondente ao mes de Outubro", num);
			break;
		
		case 11:
			printf("\nO mes %d e correspondente ao mes de Novembro", num);
			break;
		
		case 12:
			printf("\nO mes %d e correspondente ao mes de Dezembro", num);
			break;
	}
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>



// PROGRAMA PARA CALCULAR CALORIAS DA REFEICAO ESCOLHIDA PELO USUARIO

int main() {
	
	int opcao;
 	float total;
 	char prato; 
 	char bebida;
 
 	total = 0;
 
 	printf("\nEscolha a opcao de prato desejado:\n\n");
 	printf("1 - Italiano\n2 - Japones\n3 - Salvadorenho\n");
 	scanf("%d", &opcao);
 
 	switch (opcao)	{
 	
 		case 1: total = total + 750;
 		break;
 			
 		case 2: total = total + 324;
 		break;
 	
 		case 3: total = total + 545;
 		break;
 	}
 
 
 
 
	printf("\nEscolha a opcao de bebida desejada:\n\n");
 	printf("1 - Cha\n2 - Suco de Laranja\n3 - Refrigerante\n");
 	scanf("%d", &opcao);
 	
 	switch (opcao)	{
 	
 		case 1: total = total + 30;
 		break;
 	
 		case 2: total = total + 80;
 		break;
 	
 		case 3: total = total + 90;
 		break;
 	
	}
	
	printf("\nSua escolha de prato e bebida no total tera %.f calorias", total);	

	
	return 0;
	
}




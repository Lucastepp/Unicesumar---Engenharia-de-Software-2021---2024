#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	
	char nome_comodo[10];
	float largura, comprimento;
	float calculo_comodo, area_total;
	
		
	while (strcmp(nome_comodo, "fim") != 0 && 
 	strcmp(nome_comodo, "FIM") != 0){
 		
 		
	 	printf("Digite o nome do comodo: \n");
		scanf("%s", nome_comodo);
		fflush(stdin);
		
		if (strcmp(nome_comodo, "fim") != 0 && 
 		strcmp(nome_comodo, "FIM") != 0){
		
			printf("Qual a largura para o comodo %s?\n", nome_comodo);
			scanf("%f", &largura);
			fflush(stdin);
	
			printf("Qual o comprimento para o comodo %s?\n", nome_comodo);
			scanf("%f", &comprimento);
			fflush(stdin);
	
			calculo_comodo = largura * comprimento;
			printf("\nO total da area do comodo %s e igual a %.2f\n", nome_comodo, calculo_comodo);
	
			area_total = area_total + calculo_comodo;
	
			printf("\nCalculando o total de todos os comodos, favor continuar inserindo dados ou\nDigite FIM para encerrar o programa\n\n");
		
			fflush(stdin);
		
		}
		
	}
		
	printf("\n\nA area total de todos os comodos e de %.2f", area_total);
	
	return 0;
}

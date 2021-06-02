#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//PROGRAMA PARA IDENTIFICAR O PESO IDEAL
	
	float altura;
	char sexo;
	int peso;
	
	
	printf("\nBem vindo ao programa de identificacao de peso ideal: \n\n");
	printf("Informe o sexo [M / F]: \n");
	
	scanf("%c", &sexo);
			
	printf("Informe a altura: \n");
	scanf("%f", &altura);
	
				
	
	if ((sexo == 'M') || (sexo == 'm')){
		
		peso = (72.7 * altura) - 58;
		
		printf("O peso ideal para o sexo Masculino com a altura %.2f e de %d kilos.\n" , altura, peso);
	}
	
	if((sexo == 'F') || (sexo == 'f')){
		
		peso = (62.1 * altura) - 44.7;
		
		printf("O peso ideal para o sexo Feminino com a altura %.2f e de %d kilos.\n" , altura, peso);
			
	}
	
	
	if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
		
		fflush(stdin);
		
		printf("O peso ideal nao pode ser calculado, tente novamente\n\n\n");	
						
		printf("Informe o sexo [M / F]: \n");
	
		scanf("%c", &sexo);
			
		printf("Informe a altura: \n");
		scanf("%d", &altura);
	
				
	
		if (sexo == 'M' || sexo == 'm' ){
		
			peso = (72.7 * altura) - 58;
		
			printf("O peso ideal para o sexo Masculino com a altura %f e %d.\n" , altura, peso);
		}
	
		if(sexo == 'F' || sexo == 'f' ){
		
			peso = (62.1 * altura) - 44.7;
		
			printf("O peso ideal para o sexo Feminino com a altura %f e %d.\n" , altura, peso);
			
		}
		
		}
		
	return 0;	
}		
	
	
	


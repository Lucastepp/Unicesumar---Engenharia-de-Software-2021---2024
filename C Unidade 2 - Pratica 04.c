#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	
	int salario;
	int codigo;
	int novo_salario;
	
	printf("Digite o codigo do cargo:\n 1 - Servente \n 2 - Pedreiro \n 3 - Mestre de obras \n 4 - Tecnico de seguranca \n\n");
	scanf("%d", &codigo);
	
	printf("Digite o seu salario:  ");
	scanf("%d", &salario);
	
	
	switch (codigo){
		
		case 1: 
		novo_salario = salario * 1.4;
		printf("Voce digitou o codigo 1, para o cargo de Servente\n");
		printf("O salario que era de %d, tera um aumento de 40%% \n", salario);
		printf("E tera agora o valor de R$%d \n", novo_salario);
		break;
		
		case 2: 
		novo_salario = salario * 1.35;
		printf("Voce digitou o codigo 2, para o cargo de Pedreiro\n");
		printf("O salario que era de %d, tera um aumento de 35%% \n", salario);
		printf("E tera agora o valor de R$%d \n", novo_salario);
		break;
		
		case 3: 
		novo_salario = salario * 1.2;
		printf("Voce digitou o codigo 3, para o cargo de Mestre de obras\n");
		printf("O salario que era de %d, tera um aumento de 20%% \n", salario);
		printf("E tera agora o valor de R$%d \n", novo_salario);
		break;
		
		case 4: 
		novo_salario = salario * 1.1;
		printf("Voce digitou o codigo 4, para o cargo de Tecnico de seguranca\n");
		printf("O salario que era de %d, tera um aumento de 10%% \n", salario);
		printf("E tera agora o valor de R$%d \n", novo_salario);
		break;
		
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>





int main() {
	
	
	int num;
	int maior;
	int menor;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num);
	
	maior = num;
	menor = num;
	
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num);
	
	if (num > maior){
		maior = num;
	}
	if (num < menor){
		menor = num;
	}
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &num);
	
	if (num > maior){
		maior = num;
	}
	if (num < menor){
		menor = num;
	}
	
	printf("Digite o quarto numero: ");
	scanf("%d", &num);
	
	if (num > maior){
		maior = num;
	}
	if (num < menor){
		menor = num;
	}
	
	printf("Digite o quinto numero: ");
	scanf("%d", &num);
	
	if (num > maior){
		maior = num;
	}
	if (num < menor){
		menor = num;
	}
	
	printf("O maior numero e %d\n", maior);
 	printf("O menor numero e %d\n", menor);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//FUNCOES

	int num;
	int counter = 0;
	int totalnum = 0;
	int menor_valor = HUGE_VAL;
	int maior_valor = 0;
	int counter_pares = 0;
	int counter_impares = 0;

int par_impar(){
	if (num % 2 == 0){
	counter_pares++;
	}
	else{
	counter_impares++;	
	}
	
}

int maior_menor(){
	if (num > maior_valor){
		maior_valor = num;
	}
	if (num < menor_valor && num != 0){
	menor_valor = num;
	}
}


//MAIN

int main() {
	
	
	printf("\nDigite um numero: \n");
	scanf("%d", &num);
	totalnum = totalnum + num;
	par_impar();
	maior_menor();
	counter++;
	
	
	while(num != 0){
		
		printf("\nDigite um numero: \n");
		scanf("%d", &num);
		
		if(num > 0){
		
		totalnum = totalnum + num;
		par_impar();
		maior_menor();
		counter++;
		}
			
	}
	
	printf("\nA media dos valores inseridos e: %d\n", totalnum / counter );
	printf("O maior valor e: %d\n", maior_valor);
	printf("O menor valor e: %d\n", menor_valor);
	printf("A quantidade de numeros pares e: %d\n", counter_pares);
	printf("A quantidade de numeros impares e: %d\n", counter_impares);
	
	return 0;
}

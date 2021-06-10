#include <stdio.h>
#include <stdlib.h>




int main(){
	
	fflush(stdin);
	
	int soma = 0;
	int i;
	
	for(i = 200; i <= 500; i++){
		if (i % 2 == 1){
			soma = soma + i;
			
		}
	}
	
	printf("A soma dos numeros impares entre 200 e 500 e %d\n", soma);	
	
	
	
	float soma1;
 	int j;
 	for (j = 200; j <= 500; j++){
 		
 		if (j % 2 == 1)
 		soma = soma + j;
 	}
 	printf("A soma de todos os ímpares inteiros entre 200 e 500 é %.0f\n", soma1);
 
		
	return 0;
}

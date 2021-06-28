#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vacina {
	char nome[100];
	int quantidade;
	float percentual;
};

int main() {
	
	int i = 0;
	int total;
	struct vacina lista[4];
	
	for(i = 0; i < 4; i++){
		printf("Digite o nome da vacina \n");
		gets(lista[i].nome);
		fflush(stdin);
		
		printf("Digite a quantidade \n");
		scanf("%d", &lista[i].quantidade);
		fflush(stdin);
		total = total + lista[i].quantidade;
	}
	
	for(i = 0; i < 4; i++){
		lista[i].percentual = (lista[i].quantidade * 100) / total;
			
	}
	
	for(i = 0; i < 4; i++){
		printf("\n\nNome da vacina %s \n", lista[i].nome);
		printf("Quantidade %d \n", lista[i].quantidade);
		printf("Percentual %.2f \n", lista[i].percentual);
		printf("======================================\n");
		
	}
	
	return 0;
}

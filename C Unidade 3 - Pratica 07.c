#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	
	int num_pedido;
	char data[10];
	float preco;
	int quantidade;
	int counter_pedido = 0;
	float total_compra = 0;
	float media_pedido = 0;
	
	
	
	printf("Informe o numero do pedido:\n");
	scanf("%d", &num_pedido);
	fflush(stdin);
	
		
	printf("Informe a data na configuracao (10/12/2021):\n");
	scanf("%s", data);
	fflush(stdin);
	
	
	while(num_pedido != 0){
		
		
		
		printf("Informe o preco unitario: \n");
		scanf("%f", &preco);
		fflush(stdin);
		counter_pedido++;
		
		printf("Informe a quantidade: \n");
		scanf("%d", &quantidade);
		fflush(stdin);
				
		printf("Informe o numero do pedido:\n");
		scanf("%d", &num_pedido);
		
	
		total_compra = total_compra + preco * quantidade;
		media_pedido = total_compra / counter_pedido;
		
	}
	
	
	
	printf("Ola, estes sao os seus pedidos na data de %s\n", data);
	printf("O total da compra e de %.2f\n", total_compra);
	printf("A media de valor por pedido eh de %f", media_pedido);
	
	
	
	return 0;
}

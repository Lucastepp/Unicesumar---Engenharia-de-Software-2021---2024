#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int linha, coluna, tamanho;
	int i, j;
	
    printf("Digite o tamanho\n");
    
    scanf("%d", &tamanho);
    
    printf("Digite quantas colunas\n");
    
    scanf("%d", &coluna);
    
    for(i = 0; i < coluna; i++){
    	
        for(j = 0; j < tamanho; j++){
        	printf("* ");
        }
        printf("\n");
    }
    
	return 0;
}

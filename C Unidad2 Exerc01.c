#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	if (num % 5 == 0){
		printf("O numero %d e divisivel por 5\n", num);
	}	
	else
		printf("O numero %d nao e divisivel por 5\n", num);
	
	
	return 0;
}

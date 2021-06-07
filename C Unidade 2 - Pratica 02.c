#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	
	int num;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	if (num % 3 == 0){
	
		printf("O numero %d e divisivel por 3!", num);
	}	
	if (num % 7 == 0){
	
		printf("O numero %d e divisivel por 7!", num);
	}
	else{
		printf("O numero %d nao e divisivel nem por 3 e nem por 7!", num);
	}
	
	
	return 0;
}

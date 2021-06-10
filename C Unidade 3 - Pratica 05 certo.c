#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int i;
	
	for (i = 1; i <= 30; i++){
		
		
		if(i % 3 == 0){
			printf("O numero %d e divisivel por 3\n", i);
			
		}
	}
	
	printf("\n\n");
	
	for (i = 1; i <= 30; i++){	
	
		if(i % 7 == 0){
			printf("O numero %d e divisivel por 7\n", i);
		}
	}
	
 	return 0;
}

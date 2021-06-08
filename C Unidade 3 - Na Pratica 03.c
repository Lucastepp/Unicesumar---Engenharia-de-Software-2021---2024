#include <stdio.h>
#include <stdlib.h>





int main() {
	
	
	int valor;
	int i;
	int j;
	
 	for (i = 1; i <= 10; i++){
 		
 		printf ("\nTabuada do %d\n", i);
 		printf ("------------------------\n", i);
 		
 		for (j = 1; j <= 10; j++){
 			
 			valor = i*j;
 			printf ("%d x %d = %d\n", i, j, valor);
 			
 		}
 		printf ("------------------------\n", i);
 	}
 	
 	return 0;
	
		
}

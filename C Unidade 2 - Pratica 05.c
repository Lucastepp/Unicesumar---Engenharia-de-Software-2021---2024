#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
 int num;
 int i; 
 int quantidade;
 
 printf("Informe o numero:\n");
 scanf("%d", &num);
 
 quantidade = 0;
 
 for (i = 1; i <= num; i++) {
 	
 	if (num % i == 0)
 		quantidade ++;
 }
 	if (quantidade == 2)
 	printf ("O numero e primo.\n");
 	else
 	printf ("Nao e primo.\n");
 	return (0);
 
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int i;
 int j;
 int quantidade = 0;
 int cartela = 0;
 int counter;
 int vet[20];


quantidade_cartela(){
	printf("\nDigite a quantidade de cartelas: \n");
	scanf("%d", &quantidade);
	fflush(stdin);
}

gerador_cartela(){
    
    srand(time(NULL));
	do{
  		printf("Cartela Numero %d:", cartela +1 );
  		
		for(i=0; i < 10; i++){
			vet[i] = rand() % 99;
			
			for(j=0; j < i; j++){
				
				if(vet[i] == vet[j]){
					
					vet[j] = rand() % 99;								
						
						if(vet[i] == vet[j]){
							
							vet[i] = rand() % 99;
										
					}
				}
			}
		}

  	
  	  	for(counter=0; counter < i; counter++){
			printf(" %d ", vet[counter]);
		}
  	  	printf("\n================================\n");
   	  	cartela++;
  	  	  	  	
	}while(cartela < quantidade);

	return 0;
}


int main(){
   
        
    printf("Bem vindo ao Bingo\n");
    quantidade_cartela();
 	gerador_cartela();
    
}


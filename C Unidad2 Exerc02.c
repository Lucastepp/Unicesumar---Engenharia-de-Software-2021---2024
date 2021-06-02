#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char nome[20];
	int idade;
	
	printf("Informe o nome do associado: \n");
	scanf("%s", &nome);
	printf("Informe a idade do associado: \n");
	scanf("%d", &idade);
	
	//system("pause");
	
	
	
		
    if (idade < 18){
    	
    	printf("%s, A mensalidade para menores de 18 anos custa: R$50,00\n", nome);
	}
	
	else{
	
     	 	
    	if (idade >= 19 && idade <= 29){
    	
    		printf("%s, A mensalidade para idades entre 19 e 29 anos custa: R$70,00\n", nome);
		}
		
     	else{
		 	
		 	
  			if (idade >= 30 && idade <= 45){
    	
    		printf("%s, A mensalidade para idades entre 30 e 45 anos custa: R$90,00\n", nome);
			}
			
			else{
			
     	
				if (idade >= 46 && idade <= 65){
    	
    			printf("%s, A mensalidade para idades entre 46 e 65 anos custa: R$130,00\n", nome);
				}
    
    
    			else{
    	
    			printf("%s, A mensalidade para acima de 65 anos custa: R$170,00\n", nome);
    			}
   			}
    			
		}
	
	}
	
	return 0;
}

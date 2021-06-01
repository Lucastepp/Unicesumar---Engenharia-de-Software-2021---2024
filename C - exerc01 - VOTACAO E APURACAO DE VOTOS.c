#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	printf("----------------------------------------------\n");
	printf("----------Aluno Lucas Teixeira Pinto----------\n");
	printf("--Exercicio 01 - Alg e Log de Programacao 02--\n");
	printf("----------------------------------------------\n");
	printf("---------------Aperte uma tecla---------------\n");
	printf("-----------Para iniciar o programa------------\n");
	
	system("pause");
	system("cls");
	
	
	
	int var1, var2, var3;
	int ver1 = 0, ver2 = 0, ver3 = 0, nulover = 0;
	int pre1 = 0, pre2 = 0, nulopre = 0;
	
	do {
		
		
	
		printf("----------------------------------------------\n");
		printf(" Bem Vindo, escolha uma opcao para continuar: \n");
		printf("----------------------------------------------\n");
		printf(" 1 - Votar------------------------------------\n");
		printf(" 2 - Apuração dos votos-----------------------\n");
		printf(" 3 - Sair-------------------------------------\n");
	
	
		scanf("%d", &var1);
	
		system("cls");
		
		
		if ((var1 != 1) && (var1 != 2) && (var1 != 3)){
			
				printf("---------------------------------------------\n");
				printf("----------Digite um numero valido----------- \n");
				printf("-------------------------------------------- \n");
				
				system("pause");
				system("cls");
			}
		
		
		else{
		
		
			if(var1 == 1){
		
				printf("----------------Para VEREADOR:----------------\n");
				printf("----------------------------------------------\n");
				printf(" 111 - Vereador Joao do Frete-----------------\n");
				printf(" 222 - Vereador Maria da Pamonha--------------\n");
				printf(" 333 - Vereador Ze da Farmacia----------------\n");
				printf(" 444 - Voto Nulo------------------------------\n");
				printf(" Escolha uma opcao para continuar: ---------- \n");
		
		
				scanf("%d", &var2);
		
				system("cls");
			
			
				if ((var2 != 111) && (var2 != 222) && (var2 != 333) && (var2 != 444)){
			
					printf("---------------------------------------------\n");
					printf(" ---------Seu voto foi invalidado----------- \n");
					printf(" ----------Candidato inexistente------------ \n");
				}
			
			
				else{
			
		
		
					switch(var2){
			
						case 111 :{
							printf("---------------------------------------------\n");
							printf("-------Voce votou para vereador:--------------\n");
							printf(" 111 - Vereador Joao do Frete-----------------\n");
							ver1++;
							break;
						}
						case 222 :{
							printf("---------------------------------------------\n");
							printf("-------Voce votou para vereador:--------------\n");
							printf(" 222 - Vereador Maria da Pamonha--------------\n");
							ver2++;
							break;
						}
						case 333 :{
							printf("---------------------------------------------\n");
							printf("-------Voce votou para vereador:--------------\n");
							printf(" 333 - Vereador Ze da Farmacia----------------\n");
							ver3++;
							break;
						}
						case 444 :{
							printf("---------------------------------------------\n");
							printf("-----------------Voce votou NULO--------------\n");
							printf("----------------------------------------------\n");
							nulover++;
							break;	
						}
					}
				}
		
				system("pause");
				system("cls");	
		
		
		
		
		
				printf("----------------Para PREFEITO:----------------\n");
				printf("----------------------------------------------\n");
				printf(" 11 - Prefeito Dr. Zureta---------------------\n");
				printf(" 22 - Prefeito Senhor Gomes-------------------\n");
				printf(" 44 - Voto Nulo-------------------------------\n");
	    		printf(" Escolha uma opcao para continuar: ---------- \n");
		
				scanf("%d", &var3);
			
				system("cls");
			
			
				if ((var3 != 11) && (var3 != 22) && (var3 != 44)){
			
					printf("---------------------------------------------\n");
					printf(" ---------Seu voto foi invalidado----------- \n");
					printf(" ----------Candidato inexistente------------ \n");
				}
			
				else{
				
					switch(var3){
			
						case 11 :{
							printf("---------------------------------------------\n");
							printf("-------Voce votou para prefeito:--------------\n");
							printf(" 11 - Prefeito Dr. Zureta---------------------\n");
							pre1++;
							break;
						}
						case 22 :{
							printf("---------------------------------------------\n");
							printf("-------Voce votou para prefeito:--------------\n");
							printf(" 22 - Prefeito Senhor Gomes-------------------\n");
							pre2++;
							break;
						}
						case 44 :{
							printf("---------------------------------------------\n");
							printf("-------------Voce votou NULO-----------------\n");
							printf("---------------------------------------------\n");
							nulopre++;
							break;
						}	
					}
				}
			}
		
			system("pause");
			system("cls");	
		
		
		
			if(var1 == 2){	
	
				printf("-------------Apuração dos votos----------------\n");
				printf("-----------------------------------------------\n");
				printf("----------------PARA VEREADOR------------------\n");
				printf("----------Vereador Joao do Frete = %d ---------\n", ver1);
				printf("----------Vereadora Maria da Pamonha = %d -----\n", ver2);
				printf("----------Vereador Ze da Farmacia = %d --------\n", ver3);
				printf("----------Voto Nulo = %d ----------------------\n", nulover);
				printf("-----------------------------------------------\n\n");
				printf("----------------PARA PREFEITO------------------\n");
				printf("----------Prefeito Dr. Zureta = %d ------------\n", pre1);
				printf("----------Prefeito Senhor Gomes = %d ----------\n", pre2);
				printf("----------Voto Nulo = %d ----------------------\n", nulopre);
				printf("-----------------------------------------------\n");
			
				system("pause");
				system("cls");
				}
		}
	} while (var1 != 3);
	
	return 0;

}	
	
	 
	




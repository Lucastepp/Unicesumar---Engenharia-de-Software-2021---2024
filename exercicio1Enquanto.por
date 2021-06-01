

programa
{
	
	funcao inicio()
	{

		inteiro N
		real R, area
		real  pi = 3.1415
		inteiro indice = 0
		real menorArea = 0.0

		escreva("Digite quantas areas voce quer: ")
		leia(N)

		enquanto(N > 0)
		{
			escreva("Escreva o valor do raio: ")
			leia(R)
			area = pi * (R * R)

			se(indice == 0){
				menorArea = area
				
			}
			se(area < menorArea){
				menorArea = area
			}

			
			indice = indice + 1					
			N = N - 1
			
						
		}
		escreva("A menor area e" + menorArea)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 442; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
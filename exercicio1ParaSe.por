

programa
{
	
	funcao inicio()
	{
	
		inteiro N
		real R
		inteiro contador
		real area
		real pi = 3.1415
		real areaMenor = 0.0
		

		escreva("Digite quantas areas voce quer calcular: ")
		leia(N)

		para(contador = 1; contador <= N; contador++){
			escreva("Escreva o valor do " + (contador + 1) + " Raio: ")
			leia(R)
			area = pi * (R * R)

			se(contador == 1 ou area < areaMenor){
				areaMenor = area
				
			}
		
		}
		escreva("A menor area e " + areaMenor)

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 190; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
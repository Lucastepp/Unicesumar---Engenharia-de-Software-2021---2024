







programa
{
	
	funcao inicio()
	{
		real vetor[10]
		real media
		
		
		escreva("Bem vindo ao portal do aluno \n")
		escreva("Digite suas notas em formato: (x.x) \n")

		
		escreva("Digite a primeira nota\n")
		leia(vetor[1])

		escreva("Digite a segunda nota\n")
		leia(vetor[2])
		
		escreva("Digite a terceira nota\n")
		leia(vetor[3])

		escreva("Digite a quarta nota\n")
		leia(vetor[4])

		escreva("Digite a quinta nota\n")
		leia(vetor[5])

		media = (vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5]) / 5

		se (media <= 4.9){
			escreva("\nCaro aluno")
			escreva("\nA sua media anual e de ", media)
			escreva("\nVoce esta REPROVADO \n")
		}
			
		se (media >= 5.0 e media <= 6.9){
			escreva("\nCaro aluno")
			escreva("\nA sua media anual e de ", media)
			escreva("\nVoce esta EM RECUPERACAO \n")
		}
		se (media >= 7.0){
			escreva("\nCaro aluno")
			escreva("\nA sua media anual e de ", media)
			escreva("\nVoce esta APROVADO \n")
			
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 876; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */

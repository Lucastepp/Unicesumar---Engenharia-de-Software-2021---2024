programa
{
	
	funcao inicio()
	
	{
	real juca
	real chico 
	inteiro anos 

	juca = 1.10
	chico = 1.50
	anos = 0

	enquanto (juca < chico){

		chico = chico + 0.02
		juca = juca + 0.03
		anos = anos + 1
	
	}
	escreva("Juca precisara de ", anos, " anos para ser maior que Chico")
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 235; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */

//******************************************************

//Instituto Federal de São Paulo - Campus Sertãozinho

//Disciplina......: M2LPBA

//Programação de Computadores e Dispositivos Móveis

//Aluno...........: Leandro Almeida de Carvalho
//Universidade....: Universidade Federal do Ceará
//Curso...........: Ciência da Computação

//******************************************************

// Observação: Utilizo SO Linux e portanto utilizo o GCC e não o DEV C++. Porém o código funcionará em ambas as plataformas.



// Inclusão das bibliotecas necessárias para a realização do que foi pedido.
// Variável TAM previamente definida de acordo com o enunciado proposto.
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(int argc, char const *argv[])
{
	// Objetivo: declaração e inicialização de variáveis / ponteiros.
	int *vet;
	int soma = 0 , produto = 1;

	// Objetivo: Alocação de memória através da função malloc.
	vet = (int*) malloc(TAM * sizeof (int));

	// Objetivo: Laço utilizado para pedir ao usuário os valores para preencher o vetor
	// Obs.: Inicialização do vetor inicia na posição 0 (zero).
	for (int i = 0; i < 5; ++i)
	{
		printf("Digite um valor inteiro para vet[%d]: \n", i);
		scanf("%d", &vet[i]);
		printf("\n");
	}

	// Objetivo: Laço utilizado para calcular a soma e o produto dos elementos.
	for (int i = 0; i < 5; ++i)
	{
		soma = soma + vet[i];
		produto = produto * vet[i];
	}

	// Objetivo: Liberação de memória previamente alocada.
	free(vet);

	//Impressão de resultados na tela.


	// Objetivo: Verifica se a soma é positiva ou negativa e imprime o resultado na tela.
	if (soma > 0)
	{
		printf("A soma dos elementos do vetor: %d \n", soma );
		printf("O valor apresentado na soma eh positivo. \n");
	}
	else
	{
		printf("A soma dos elementos do vetor: %d \n", soma );
		printf("O valor apresentado na soma eh negativo. \n");
	}

	// Objetivo: Verifica se o produto é positivo ou negativo e imprime o resultado na tela.
	if (produto > 0)
	{
		printf("O produto dos elementos do vetor: %d \n", produto );
		printf("O valor apresentado no produto eh positivo. \n");
	}
	else
	{
		printf("O produto dos elementos do vetor: %d \n", produto );
		printf("O valor apresentado no produto eh negativo. \n");
	}

	return 0;
}
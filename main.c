#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/* Variáveis */
	srand(time(0)); /* Gera uma seed baseada no tempo */
	int numero_secreto = rand() % 100; /* Pega o resto da divisão de 100 */
	int chute = 0;

	int contador_tentativas = 1;

	/* Cabeçalho do Jogo */
	printf("*************************************\n");
	printf("* Bem vindo ao Jogo de Adivinhação! *\n");
	printf("*************************************\n");

	printf("\n");

	/* Loop do Jogo */
	while (1)
	{
		printf("Tentativa %d\n", contador_tentativas);

		printf("Digite seu chute: ");
		scanf("%d", &chute);

		/* Se tiver acertado*/
		if (chute == numero_secreto)
			break;
		
		/* Se tiver errado */
		else if (chute > numero_secreto)
			printf("Seu chute foi MAIOR do que o número gerado!\n\n");
		else if (chute < numero_secreto)
			printf("Seu chute foi MENOR do que o número gerado!\n\n");

		contador_tentativas++;
	}

	printf("\nParabéns!\n");
	printf("Você acertou em %d tentativas!\n", contador_tentativas);

	return (0);
}
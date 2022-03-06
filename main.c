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
	int numero_tentativas = 6;
	int dificuldade = 0;

	int acertou = 0;

	/* Cabeçalho do Jogo */
	printf("*************************************\n");
	printf("* Bem vindo ao Jogo de Adivinhação! *\n");
	printf("*************************************\n");

	printf("\n");

	/* Seleciona dificuldade */
	printf("******* Dificuldades *******\n");
	printf("(1) Fácil - 20 Tentativas\n");
	printf("(2) Médio - 15 Tentativas\n");
	printf("(3) Difícil - 6 Tentativas\n");
	printf("Selecione a dificuldade desejada: ");
	scanf("%d", &dificuldade);

	if (dificuldade <= 0 || dificuldade >= 4) {
		printf("Por favor, selecione uma dificuldade válida!\n");
		return (1);
	}

	switch (dificuldade)
	{
		case 1:
			numero_tentativas = 20;
			break;
		case 2:
			numero_tentativas = 15;
			break;
		case 3:
			numero_tentativas = 6;
	}

	printf("****************************\n\n");

	/* Loop do Jogo */
	for (int i = 1; i <= numero_tentativas; i++)
	{
		printf("Tentativa %d de %d\n", contador_tentativas, numero_tentativas);

		printf("Digite seu chute: ");
		scanf("%d", &chute);

		acertou = chute == numero_secreto;

		/* Se tiver acertado*/
		if (acertou)
			break;

		/* Se tiver errado */
		else if (chute > numero_secreto)
			printf("Seu chute foi MAIOR do que o número gerado!\n\n");
		else if (chute < numero_secreto)
			printf("Seu chute foi MENOR do que o número gerado!\n\n");

		contador_tentativas++;
	}

	if (acertou)
	{
		printf("\nParabéns!\n");
		printf("Você acertou em %d tentativas de %d!\n", contador_tentativas, numero_tentativas);
	}
	else
	{
		printf("Você falhou!\n");
		printf("Tente novamente!\n");
	}

	return (0);
}
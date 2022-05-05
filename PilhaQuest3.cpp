#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>

int main()
{

struct spilha pilhaX, pilhaY;
char Palavra[25];
int i, tamanhoDaPalavra, x=0;

init(&pilhaX);
init(&pilhaY);

printf("Entre com uma palavra\n");
scanf("%s", Palavra);
tamanhoDaPalavra = strlen(Palavra);

for (i=0; i<=tamanhoDaPalavra; i++)
{
	push(&pilhaX, Palavra[i]);
}

for (i=tamanhoDaPalavra-1; i>=0; i--)
{
	push(&pilhaY, pilhaX.vetor[i]);
}

for (i=pilhaX.topo-1; i>=0; i--)
{ 
	printf("%c\n",pilhaX.vetor[i]); 
}
 
printf("\n");

for (i=pilhaY.topo-1; i>=0; i--)
{ 
	printf("%c\n",pilhaY.vetor[i]); 
}
 
printf("\n");

for (i=0; i<=tamanhoDaPalavra; i++)
{
	printf("%c | %c\n\n", pilhaX.vetor[i], pilhaY.vetor[i]);
	if (pilhaX.vetor[i] == pilhaY.vetor[i])
	{
		printf("Letra compativel\n\n");
		x++;
		printf("x = %d\n", x);
	}
}
printf("x = %d\n\n", x);
printf("tamanhoDaPalavra = %d\n\n", tamanhoDaPalavra);

if (x-1==tamanhoDaPalavra)
{
printf("A PALAVRA E PALINDROMA\n");
}
else
{
printf("A PALAVRA NAO E PALINDROMA");
}

}

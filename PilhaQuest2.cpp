
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

struct spilha pilhaX, pilhaY, pilhaZ;
int i;

init(&pilhaX);
init(&pilhaY);
init(&pilhaZ);

printf("Executando operacao PUSH \n");

push(&pilhaX,'A');
push(&pilhaX,'B');
push(&pilhaX,'C');
push(&pilhaX,'D');
push(&pilhaY,pop(&pilhaX));
push(&pilhaY,pop(&pilhaX));
push(&pilhaY,pop(&pilhaX));
push(&pilhaZ,pop(&pilhaX));
push(&pilhaX,pop(&pilhaY));
push(&pilhaZ,pop(&pilhaY));
push(&pilhaZ,pop(&pilhaX));
push(&pilhaZ,pop(&pilhaY));

printf("\nPercorrendo a Pilha Y");

for (i=pilhaX.topo-1; i>=0; i--)
 { printf("%c\n",pilhaX.vetor[i]); }

printf("\n\n");

for (i=pilhaY.topo-1; i>=0; i--)
 { printf("%c\n",pilhaY.vetor[i]); }
 
printf("\n\n");

 for (i=pilhaZ.topo-1; i>=0; i--)
 { printf("%c\n",pilhaZ.vetor[i]); }
}

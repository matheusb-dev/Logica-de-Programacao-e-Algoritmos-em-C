#include <stdio.h>

void main(){

    float vetor[10];
    int i;
    float media, soma;

    for(i = 0; i < 10; i++)
    {
        printf("Digite a nota do %d.....: ", i+1);
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = soma/10;

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("A nota do %d aluno e.....: %.1f \n ", i+1, vetor[i]);
    }

    printf("a media foi de %.2f ", media/10);


}
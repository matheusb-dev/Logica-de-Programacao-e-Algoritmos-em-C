/* Autor...: Rodney Carneiro
    Data....: 14/02/2024 
    Objetivo: Fazer um programa que pergunte a idade de 10 alunos e
              mostre a media de idade.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    int idade;
    int soma;

    soma = 0;

    for (t=1 ; t <= 10; t++) {
        do {
            printf("Digite sua idade do aluno %d: ",t);  
            scanf("%d",&idade);
            if (idade < 18) {
                printf("Idade invalida\n");
                getch();
            }
        } while (idade < 18);
        soma = soma + idade;
    }

    printf("Soma = %d\n", soma);
    printf("Media = %d\n", soma / 10);
    return 0;

}
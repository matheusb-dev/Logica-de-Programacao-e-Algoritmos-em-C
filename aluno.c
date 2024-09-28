/* Autor.: Rodney Brazuca Smnits
    Data..: 14/02/2024
    Objetivo.: Calculo da Media de um Aluno
*/
#include <stdio.h>
int main() {
    // Declaracao das Variaveis
    char nome[40];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    // incializacao e Atribuição dos valores nas variaveis
    strcpy(nome,"Televisildo da Silva");
    nota1 = 4.5;
    nota2 = 8.3;
    nota3 = 5.4;
    nota4 = 10.0;

    // calculo da media
    media = (nota1 + nota2 + nota3 + nota4) / 4; 

    // Apresenta os valores
    printf("Nome.....: %s\n",nome);
    printf("Media....: %.1f\n",media);

    return 0;
}
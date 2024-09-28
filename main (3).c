/*
 Aluno....:Cassio
 Data...:27/03/2024
 Obijetivo...:Escrever um programa que le o Variaveis
*/
#include <stdio.h>
#include <string.h>
 int main()

{
 // Declaração das Veriavels   
 int Idade;
 float Salario;
 char Sexo;
 char Cidade[20];
 
 // Inicilização Variaveis
 Idade = 20;
 Salario = 13000;
 Sexo = 'M';
 strcpy(Cidade,  "Maringa");
 
 printf("Digite sua Idade ......:");
 scanf("%d",&Idade);
 printf("Digite seu Salario.....:");
 scanf("%f",&Salario);
 getchar();
 printf("Digite seu Sexo........:");
 scanf("%c",&Sexo);
 getchar();
 printf("Digite sua Cidade......:");
 scanf("%s",Cidade);
 
 // Imprimir as Variaveis
 printf("Idade....: %d\n",Idade);
 printf("Salario..: %.2f\n",Salario);
 printf("Sexo.....: %c\n",Sexo);
 printf("Cidade...: %s\n",Cidade);
    return 0;
}

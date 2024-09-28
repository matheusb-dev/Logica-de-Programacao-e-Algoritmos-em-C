/*  Autor: Matheus Bezerra Domingos
    Data: 27/03/2024
*/    


#include <stdio.h>
#include <string.h>
int main(){
    
   /*Declarar variaveis*/
   
   int idade;
   float salario;
   char sexo;
   char cidade[20];
   
   /*Atribuindo valores*/
   printf("Digite sua idade\n");
   scanf("%d",&idade);
   printf("Digite seu salário\n");
   scanf("%f",&salario);
   getchar();
   printf("Digite seu sexo\n");
   scanf("%c",&sexo);
   getchar();
   printf("Digite sua cidade\n");
   scanf("%s",cidade);
 

   
   /*imprimir na tela*/
   printf("\n");
   printf("Idade...: %d\n",idade);
   printf("Salário..: %2.f\n",salario);
   printf("Sexo..: %c\n",sexo);
   printf("Cidade..: %s\n",cidade);
   
   
   
    return 0;
}
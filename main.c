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
   sca idade = 18;
   salario = 1202.23;
   sexo = 'm';
   strcpy(cidade, "Nova Esperança");
   
   /*imprimir na tela*/
   printf("Idade...: %d\n",idade);
   printf("Salário..: %2.f\n",salario);
   printf("Sexo..: %c\n",sexo);
   printf("Cidade..: %s\n",cidade);
   
   
   
    return 0;
}
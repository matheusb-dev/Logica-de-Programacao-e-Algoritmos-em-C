/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Calcular o valor da prestação atrasada
*/

#include <stdio.h>
int main(){
    
    /*Declarando variaveis*/
    float prestacao, valor, tempo, taxa;
    
    /*Atribuindo valor*/
    printf("Digite o valor da prestação....: \n");
    scanf("%f", &valor);
    printf("Digite o valor da taxa....: \n");
    scanf("%f", &taxa);
    printf("Digite em meses quanto tempo sua prestação esta atrasada....: \n");
    scanf("%f", &tempo);
    
    /*Calculando a area*/
    prestacao = valor+(valor*(taxa/100)*tempo);
    
    /*Exibindo o resultado*/
    printf("O valor da prestação atrasada foi de:.... %.2f",prestacao);
    
    return 0;
    
}
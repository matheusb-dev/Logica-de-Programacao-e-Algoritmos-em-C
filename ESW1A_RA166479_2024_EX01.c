/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Calcular a area do triangulo
*/

#include <stdio.h>
int main(){
    
    /*Declarando variaveis*/
    float base;
    float altura;
    float area;
    
    /*Atribuindo valor*/
    printf("Digite a base:.... \n");
    scanf("%f", &base);
    printf("Digite a altura:.... \n");
    scanf("%f", &altura);
    
    /*Calculando a area*/
    area = (base * altura)/2;
    
    /*Exibindo o resultado*/
    printf("A area do triangulo é:.... %2.f",area);
    
    return 0;
    
}
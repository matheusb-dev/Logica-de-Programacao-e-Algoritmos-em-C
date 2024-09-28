/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa que faz a Conversão de dolar
*/

#include <stdio.h>
int main(){
    
    /*Declarando variaveis*/
    float p, v;
    
    /*Digite o valor do produto*/
    printf("Escreva o valor do produto....: ");
    scanf("%f",&p);

    /*Calculando a converção*/
    v = p * 5,065;

    /*Mostrando a converção*/
    printf("O valor do produto em dolar é de....: %.2f",v);
    
    return 0;
    
}
/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa que calcule o gastos de combustivel e também a média de consumo
*/

#include <stdio.h>
int main(){
    
    /*Declarando as variaveis*/
    float q;
    float d; 
    float p;
    float c;
    float ct;

    /*Atribuindo valor a elas*/
    printf("Digite a distancia percorrida....: ");
    scanf("%f",&d);

    printf("Digite o combustivel gasto....: ");
    scanf("%f",&c);

    /*Calculando*/
    p = 5.24;

    ct = c * p;

    q = c/d;
 
    /*Monstrando ao usuário*/
    printf("Você precisa colocar....: R$%.2f \n",ct);

    printf("A méia de consumo de combustivel é de...: %.2f Litros", q);

    
    return 0;
    
}

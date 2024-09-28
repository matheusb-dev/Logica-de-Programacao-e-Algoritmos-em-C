/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa que calcule o custo de fabricação de
    um carro e mostre o custo ao consumidor
*/

#include <stdio.h>
int main(){
    
    /*Declarando as variaveis*/
    float ct, c; 

    /*Atribuindo valor a elas*/
    printf("Digite o custo de fábrica....: ");
    scanf("%f",&ct);

    /*Calculando*/ 
    c = (ct*0.28) + (ct * 0.45) + ct ;

    /*Exibindo na tela*/
    printf("O custo do consumidor no seu carro é de..: R$%.2f ",c);

    
    return 0;
    
}

/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa que le as distancias percorridas
*/
#include <stdio.h>
int main(){
    
    float q, d, dl, cl, ct;


    printf("Digite a distancia percorrida.....: ");
    scanf("%f",&d);

    printf("Digite quanto km para 1L....: ");
    scanf("%f",&dl);

    printf("Digite o preço da gasolina.....: ");
    scanf("%f",&cl);


    /*Calculando*/
    q = d/dl;

    ct = q * cl;

    /*exibindo na tela*/
    printf("Você precisa colocar....:  %.2f Litros\n",q);

    printf("E você vai gastar....:R$%.2f",ct);
    
    return 0;
}

    

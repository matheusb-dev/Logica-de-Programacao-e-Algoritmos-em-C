/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Calcule o valor de R dessa expressão
*/

#include <stdio.h>
int main(){
    
    /*Declarando variaveis*/
    float x, y, z, R;
    
    /*Monstrando a expressão*/
    printf("Calcule essa expressão R=((x * 5)*y)*z; \n");
    
    /*Atribuindo valor as elas*/
    printf("Digite o valor de x...: ");
    scanf("%f",&x);
 
    printf("Digite o valor de y...: ");
    scanf("%f",&y);
 
    printf("Digite o valor de z...: ");
    scanf("%f",&z);


    /*Calculo o valor de R*/
    R=((x * 5)*y)*z;

    /*Exibindo o valor de R*/
    printf("O valor de R é....: %.0f",R);
    
    return 0;
    
}
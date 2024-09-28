/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa que le sua idade
*/
#include <stdio.h>
int main(){
    
    /*Declarando as variaveis*/
    int a, m, d, c;
    
    /*Atribuindo valor a elas*/
   printf("Digite sua idade: (ANOS, MESES, DIAS): ");
    scanf("%d %d %d", &a, &m, &d);

    /*Calculo*/ 
    c = a * 365 + m * 30 + d;

    /*exibindo na tela*/
    printf("Você esta vivo há: %.f dias",c);

    
    return 0;
    
}

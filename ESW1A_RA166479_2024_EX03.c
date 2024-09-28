/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Calculando o valor da média ponderada
*/

#include <stdio.h>
int main(){
    
    /*Declarando variaveis*/
    float n1, n2, n3, m;
    
    /*Atribuindo valor as elas*/
    printf("Digite sua primeira nota....:");
    scanf("%f",&n1);
 
    printf("Digite sua segunda nota....:");
    scanf("%f",&n2);
 
    printf("Digite sua terceira nota...:");
    scanf("%f",&n3);

    /*Calculo da media*/
    m = ((n1*2)+(n2*3)+(n3*5))/10;

    /*Exibindo a média do aluno*/
    printf("Sua media é....: %.1f",m);
    
    return 0;
    
}
/*  Autor: Matheus Bezerra domingos
    Data: 06/05/2024
    Objetivo: faça um programa que a partir do salário de um funcionário, 
    calcule o desconto do INSS
*/

#include <stdio.h>
    
void main(){
    
    //Declarando as variaveis
    float salario, descontoINSS;
    
    //Atribuindo valor a elas
    printf("Digite seu salario:... ");
    scanf("%f", &salario);
    
    // ------------
    
    
    //Calculando o descontoINSS
    if (salario <= 1570){
        descontoINSS = salario * 0.08;
    }else{
        descontoINSS = salario * 0.09;
    }
    
    salario -= descontoINSS; // salario -=
    
    printf("Seu salario com o desconto é de:... %.2f", salario);
}
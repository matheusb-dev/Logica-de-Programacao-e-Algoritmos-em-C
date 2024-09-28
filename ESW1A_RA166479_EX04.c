/*  Autor: Matheus Bezerra domingos
    Data: 06/05/2024
    Objetivo: faça um programa que analisa a quantidade de peças vendidas por um funcionário de uma loja com afinalidade 
    de conceder gratificação no salário dentro dos parâmetros:
*/

#include <stdio.h>

void main(){
    
    //Variaveis
    char nome[40];
    float pecasVendidas, gratificacao, salario;
   
    //Atribuindo valor
    printf("Digite seu nome:... ");
    scanf("%s", nome);
    
    printf("Digite a quantidades de peças vendidas em seguida:.. ");
    scanf("%f", &pecasVendidas);
    
    printf("Digite seu salario:.. ");
    scanf("%f", &salario);

    //Calculando
    if(pecasVendidas <= 30){
        
        gratificacao = 0;
    }else if(pecasVendidas > 31 && pecasVendidas > 60){
        gratificacao = pecasVendidas * 0.1;
    }else if(pecasVendidas > 61 && pecasVendidas > 100){
        gratificacao = pecasVendidas * 0.15;
    }else if(pecasVendidas > 101 && pecasVendidas > 150){
        gratificacao = pecasVendidas * 0.2;
    }else{
        gratificacao = pecasVendidas * 0.3;
    }
    
    salario += gratificacao;
    
    printf(" O funcionario/a %s gratificação R$ %.2f, salário total R$ %.2f", nome, gratificacao, salario);
}

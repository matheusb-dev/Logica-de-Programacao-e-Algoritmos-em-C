/*  Autor: Matheus Bezerra domingos
    Data: 06/05/2024
    Objetivo: faça um programa que efetuar a leitura número de horas extras 
    e no número de horas que o empregado faltou ao trabalho.
*/ 

#include <stdio.h>

void main(){
    
    //Declarandoo variaves
    float horadExtras, horasFaltou, premio, horas;
    
    //Atribuindo valor
    printf("Digite o total de horas extras feitas:.. ");
    scanf("%f", &horadExtras);
    
    printf("Digite o total de horas que você faltou:... ");
    scanf("%f", &horasFaltou);
    
    //Calculando
    horas = horadExtras - horasFaltou;
    
    //Exibir na tela o total de horas
    printf("Seu total de horas foi de:.. %f \n", horas);
    
    if(horas >= 0 && horas <= 10){
        premio = 20;
    }else if(horas > 10 && horas <= 20){
         premio = 40;
    }else if(horas > 20 && horas <= 30){
         premio = 60;
    }else if(horas > 30 && horas <= 40){
         premio = 80;
    }else{
        premio = 100;
    }
    
    printf("Seu premio(R$) foi de %f \n", premio);
    
}
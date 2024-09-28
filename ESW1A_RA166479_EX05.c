/*  Autor: Matheus Bezerra Domingos
    Data: 12/05/2024
    Objetivo: fazer a soma de 15 numeros
*/


#include <stdio.h>

void main(){
    
    //Declarando variaveis
    int x, soma;
    
    printf("*** Digite 15 numero para serem somados *** \n");
    printf("\n");
    
    //digite um numero
    for(x = 0; x < 16; x++){
       
        printf("Digite um numero: ");
        scanf("%d", &x);
        
        soma = soma + x;
    }
    
    //Exibindo na tela
    printf("A soma dos numeros é de:... %d", soma);
    
}

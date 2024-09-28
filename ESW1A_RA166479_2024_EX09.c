/*  Nome: Matheus Bezerra Domingos
    Data: 06/04/2024
    Objetivo: Fazer um programa sobre empregados e calcular os valores
*/
#include <stdio.h>
int main(){
    
    float e;
    float s; 
    float b;
    float bc;
    float c1;
    float c2;
    float c3;
    float c4;


    printf("Digite o numero de empregados....: ");
    scanf("%f",&e);

    printf("Digite o salário mínimo.....: ");
    scanf("%f",&s);

    printf("Digite o preço da bicicleta sem o acréscimo.....: ");
    scanf("%f",&b);

    printf("Digite quantas bicicletas foram vendidas....: ");
    scanf("%f",&bc);
   
    c1=((b*0.50)+b)*bc;

 
    c2=(c1*0.15);


    c3 = c2/e+s*2 ;


    c4 = c1-c2-s*2;


    printf("Cada empregado vai ganhar um total de....: R$%.2f\n",c3);
    printf("E essa empresa vai lucrar um total de....: R$%.2f",c4);
    
    return 0;
}

    

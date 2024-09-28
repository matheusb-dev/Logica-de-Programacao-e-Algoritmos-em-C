/*
Nome:Gabriel De Souza Mendes
Data:30/05/2024
Objetivo:Escrever um algoritmo que leia um vetor de 10 números inteiros e 
imprima na tela os valores que são primos.


*/
#include <stdio.h>

void main() {
   //Colocando as variaveis///
    int var[10];
    int x;
    int numprim;
    int j;
    
  //Pegando os valores//
  
    for (x = 0; x < 10; x++) {
        printf("Digite o %d numero:",x);
        scanf("%d", &var[x]);
    }

    // Verificando e mostrandos os numeros primos//
    printf("Os numeros primos são:\n");
    for (x = 0; x < 10; x++) {
      numprim = 1; 

        if (var[x] <= 1) {
           numprim = 0; 
        } else {
            for (j = 2; j <= var[x] / 2; j++) {
                if (var[x] % j == 0) {
                   numprim = 0; 
                    break; 
                }
            }
        }

        if (numprim) {
            printf("%d\n", var[x]);
        }
    }


}

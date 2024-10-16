#include <stdio.h>

void main(){

    //inicializando variaveis
    int vetor[10]; //meu vetor de 10 posições
    int primo, i, j; //variavel para guardar os n primos, i e j para fazer o for

    for(i=0;i<10;i++){ //pegamos os dez numeors
        printf("Digite o %d numeor...: ", i + 1);
        scanf("%d",&vetor[i]);
    }

    //andamos o vetor inteiro
    for(i=0; i<10; i++){
        primo = 1; //falamos que primo é igual a 1
        if(vetor[i]<=1){ //se vetor for menor ou igual a 1 primo é igual a 0
            primo = 0;
        }else{ //caso for maior faz a conta para verificar
            for(j=2; j <= vetor[i] / 2; j++){ //j vale 2 e se j for menor que vetor / 2
                if(vetor[i] % j == 0){
                    primo = 0;
                    break;
                }
            }
        }
        if(primo){
            printf("%d\n", vetor[i]);
        }
    }
}
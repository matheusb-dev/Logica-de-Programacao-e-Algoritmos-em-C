#include <stdio.h>

void main(){

    int vetor[10] = {1,2,3,4,5,6,7,8,9,2};
    int i, j;
    int aux;

    for(i=0; i<9; i++){
        for(j = i + 1;j < 10; j++){

            if(vetor[i]<vetor[j]){

                aux=vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d \n", vetor[i]);
    }

}
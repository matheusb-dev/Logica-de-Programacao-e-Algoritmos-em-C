#include <stdio.h>

void main(){

    int vetor[10];
    int i;
    srand(time(NULL));
    int dobro[10];

    for(i=0; i < 10; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d \n", vetor[i]);
    }

    printf("\n");

    for(i=0; i<10; i++){
        dobro[i] = vetor[i]*2;
        printf("%d \n", dobro[i]);
    }

}
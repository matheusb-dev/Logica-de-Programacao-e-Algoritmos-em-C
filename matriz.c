#include <stdio.h>

void main(){

    int matriz[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    int soma = 0;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            soma = soma + matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriz e %d\n", soma);
}

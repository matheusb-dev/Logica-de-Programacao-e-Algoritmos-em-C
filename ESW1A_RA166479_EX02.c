/*  Autor: Matheus Bezerra Domingos
    Data: 12/05/2024
    objetivo: Dos numeros dos 0 à 200, quais são divisiveis por 4??
*/

#include <stdio.h>

void main(){
    
    int t;
    t = 1;
    
    for(t > 0; t < 200; t++){
        if(t % 4 == 0){
            printf("O numero %d é divisivel por 4 \n",t);
        }
    }
}


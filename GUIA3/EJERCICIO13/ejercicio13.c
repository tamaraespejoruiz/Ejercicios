#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "probabilidades.h"
#include "ejercicio13.h"


int main(void){

    moneda_t moneda;

    srand(time(NULL));/* Inicializa mi semilla en un num aleatorio*/

    printf("%d\n", probabilidad_a());
    printf("%d\n", probabilidad_b());
    
    moneda = probabilidad_c();

    if (moneda == CARA){
        printf("%s\n", MSJ_MONEDA_CARA);
    }else{
        printf("%s\n", MSJ_MONEDA_CECA);
    }

    imprimir_dado(tirar_dado());

    return EXIT_SUCCESS; 

}


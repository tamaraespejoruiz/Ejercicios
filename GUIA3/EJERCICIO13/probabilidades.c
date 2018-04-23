#include <stdlib.h>
#include <stdio.h>

#include "probabilidades.h"

int probabilidad_a(void){

    float z;
    z = (float) rand() / RAND_MAX;

    return (z < 0.2) ? 0 : 1;
}

int probabilidad_b(void){
    
    float z;
    z = (float) rand() / RAND_MAX;

    if(z < 0.1){
        return 3;
    }else if(z < 0.65){
        return 5;
    }
    return 9;
}

moneda_t probabilidad_c(void){

    float z;
    z = (float) rand() / RAND_MAX; 

    return (z < 0.5) ? CECA : CARA;
}

int tirar_dado(void){
    float z;
    int m;

    z = (float) rand() / RAND_MAX; 
    m = (z * 6) + 1;
    return m;
}

void imprimir_dado(int valor){

    switch(valor){

        case 1:    
            puts(MSJ_TEXTO_DADO_CARA_1);
            break;
        case 2:    
            puts(MSJ_TEXTO_DADO_CARA_2);
            break;
        case 3:
            puts(MSJ_TEXTO_DADO_CARA_3);
            break;
        case 4:
            puts(MSJ_TEXTO_DADO_CARA_1);
            break;
        case 5:
            puts(MSJ_TEXTO_DADO_CARA_5);
            break;
        case 6:
            puts(MSJ_TEXTO_DADO_CARA_6);
            break;
        default: 
            fprintf(stderr,"%s\n", MSJ_ERROR_IMPRIMIR_DADO_DEFAULT);

    }
}

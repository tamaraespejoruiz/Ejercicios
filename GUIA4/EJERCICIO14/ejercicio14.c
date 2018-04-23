#include <stdio.h>
#include <stdlib.h>

#include "ejercicio14.h"
#include "busqueda_binaria.h"



int main(void){
    int resultado;
    const int arreglo[LARGO_ARREGLO] = {1,2,3,4,5,6,7,8};


    resultado = busqueda_binaria(arreglo,OBJETIVO,0,8);
    if(resultado == ELEMENTO_NO_ENCONTRADO){
        fprintf(stderr,"%s: %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_ELEMENTO_NO_EXISTE);
        return EXIT_FAILURE;
    }

    printf("%s %d %s %d\n", MSJ_ELEMENTO, OBJETIVO, MSJ_POSICION, busqueda_binaria(arreglo,OBJETIVO,0,8));
    

    return EXIT_SUCCESS;

}

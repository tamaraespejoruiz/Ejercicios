#include <stdlib.h>


#include "convertir_segundos_a_hora.h"

status_t convertir_segundos_a_hora(int segundos, int *seg, int *min, int *hora){

    int aux;

    if(segundos < 0){
        return ST_ERROR;
    }
    *hora = (segundos / 3600);    
    aux = segundos - 3600 * (*hora);
    *min = (aux / 60);
    *seg = aux - 60 * (*min);
    
    return ST_OK;
}
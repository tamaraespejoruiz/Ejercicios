#include <stdio.h>
#include <stdlib.h>

#include "ejercicio1.h"
#include "convertir_segundos_a_hora.h"
#include "limpiar_buffer.h"

int main(void){

    int horas, minutos, segundos, segundos_restantes;
    status_t estado;
	
	printf("%s\n", MSJ_INGRESO_SEGUNDOS);
	if(scanf("%d",&segundos) != 1 || segundos < MINIMO){
		fprintf(stderr,"%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_INVALIDO);
		return EXIT_FAILURE;
	}
    limpiar_buffer();

    estado = convertir_segundos_a_hora(segundos, &segundos_restantes, &minutos, &horas);

    if(estado == ST_ERROR){
        fprintf(stderr, "%s", MSJ_ST_ERROR);
        return EXIT_FAILURE;
    }
    
    printf("Son %d horas %d minutos y %d segundos\n", horas, minutos, segundos_restantes);

    return EXIT_SUCCESS;	

}
/* Implementar las siguientes funciones. Todas ellas reciben el radio y la altura de un cilindro y 
retornan un número real i.e. r∈R:

    cilindro_diametro(),
    cilindro_circunferencia(),
    cilindro_base(), y
    cilindro_volumen().
*/


#include <stdio.h>
#include <stdlib.h>

#include "ejercicio6.h"
#include "limpiar_buffer.h"
#include "cilindro.h"

int main(void){
    
    float radio;
    float altura;

    puts(MSJ_INGRESO_BASE);
    if(scanf("%f",&radio) != 1){
		fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_NUM_INVALIDO);
		return EXIT_FAILURE;
	}
    limpiar_buffer();

    puts(MSJ_INGRESO_ALTURA);
    if(scanf("%f",&altura) != 1){
		fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_NUM_INVALIDO);
		return EXIT_FAILURE;
	}		
    limpiar_buffer();

    printf("%s %.2f\n", MSJ_RESULTADO_DIAMETRO, cilindro_diametro(radio));
    printf("%s %.2f\n", MSJ_RESULTADO_CIRCUNFERENCIA, cilindro_circunferencia(radio));
    printf("%s %.2f\n", MSJ_RESULTADO_BASE, cilindro_base(radio));
    printf("%s %.2f\n", MSJ_RESULTADO_VOLUMEN, cilindro_volumen(radio,altura));

    return EXIT_SUCCESS;
}


    
    
    
    





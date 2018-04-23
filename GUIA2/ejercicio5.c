/* La clasificación espectral de estrellas (cuerpos celestes) permite agruparlas en función de su temperatura,
como se muestra en la tabla siguiente:
Clase 	Temperatura 	Color
O 	28000 - 50000 K 	Azul
B 	9600  - 28000 K 	Blanco azulado
A 	7100  - 9600 K 	    Blanco
F 	5700  - 7100 K 	    Blanco amarillento
G 	4600  - 5700 K 	    Amarillo
K 	3200  - 4600 K 	    Naranja
M 	1700  - 3200 K 	    Rojo

Defina el tipo enumerativo espectral_t con los símbolos correspondientes a las clases espectrales.
Escriba un programa que le pida al usuario la temperatura de un cuerpo celeste y almacene la clase del mismo
en una variable del tipo espectral_t. Luego, imprima el color de la estrella.

*/

#include <stdio.h>
#include <stdlib.h>

#include "ejercicio5.h"
#include "limpiar_buffer.h"

int main(void){
    
    espectral_t clase;
    int temperatura;
    
    puts(MSJ_INGRESO);
    
    if(scanf("%d",&temperatura) != 1 || temperatura < TEMP_MIN || temperatura > TEMP_MAX){
        fprintf(stderr, "%s : %s\n",MSJ_ERROR_PREFIJO, MSJ_ERROR_NUM_INVALIDO);
        return EXIT_FAILURE;
    }
    
    limpiar_buffer();

    if(temperatura < LIMITE_TEMP_CLASE_M){
        clase = CLASE_M;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_K){
        clase = CLASE_K;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_G){
        clase = CLASE_G;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_F){
        clase = CLASE_F;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_A){
        clase = CLASE_A;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_B){
        clase = CLASE_B;
    }
    else if(temperatura < LIMITE_TEMP_CLASE_O){
        clase = CLASE_O;
    }

    switch(clase){

        case CLASE_M:
            puts(MSJ_ROJO);
            break;
        
        case CLASE_K:
            puts(MSJ_NARANJA);
            break;
        
        case CLASE_G:	
            puts(MSJ_AMARILLO);
            break;
            
        case CLASE_F:
            puts(MSJ_BLANCO_AMARILLENTO);
            break;
            
        case CLASE_A:
            puts(MSJ_BLANCO);
            break;
            
        case CLASE_B: 
            puts(MSJ_BLANCO_AZULADO);
            break;
            
        case CLASE_O:
            puts(MSJ_AZUL);
            break;
            
        default:
            puts(MSJ_DEFAULT); 
    }		
 
    return EXIT_SUCCESS;
    
}


 
    
     
